Amani.SVG = !!(document.createElementNS && document.createElementNS('http://www.w3.org/2000/svg', 'svg').createSVGRect);

Amani.FilterFactory.include({
    timeline: function (options, cf, data) {
        var date = d3.time.format("%Y-%m-%dT%H:%M:%S"),
            get_day = function (f) { return d3.time.day(date.parse(f.properties[options.key])); },
            dimension = cf.dimension(get_day),
            extent = d3.extent(data, get_day),
            container = document.getElementById(options.container);

        return new Amani.TimelineFilter(dimension, extent, container);
    }
});

Amani.TimelineFilter = Amani.Filter.extend({
    initialize: function (dimension, extent, container) {
        var init = Amani.SVG ? this._initTimelineGraph : this._initDatePicker;
        init.call(this, dimension, extent, container);
    },

    _initTimelineGraph: function (dimension, extent, container) {
        var dates = dimension.group(),
            render = this.render.bind(this),
            update = this.update.bind(this),
            margin = { top: 10, right: 15, bottom: 20, left: 15 },
            height = 60,
            width = container.clientWidth - margin.left - margin.right,
            scale = d3.time.scale()
                .domain(extent)
                .rangeRound([0, width])
                .nice(d3.time.week),
            charts = [
                Amani.barChart()
                    .dimension(dimension)
                    .group(dates)
                    .interval(d3.time.day)
                    .x(scale)
                    .y(d3.scale.linear().range([height, 0]))
                    .margin(margin)
                    .filter()
            ],
            containers = charts.map(function () {
                return L.DomUtil.create('div', 'timeline-filter-chart', container);
            });

        var chart = this.chart = d3.selectAll(containers).data(charts).each(function (chart) {
            // chart.on('brush.datepicker', function (e) { set_date(e.extent()); });
            // chart.on('brushend.datepicker', function (e) { set_date(e.extent()); });
            chart.on('brush', render).on('brushend', render);
        });

        update();

        L.DomEvent.on(window, 'resize', function () {
            var width = container.clientWidth - margin.left - margin.right;
            scale.rangeRound([0, width]);
            update();
        });

    },

    _initDatePicker: function (dimension, extent, container) {
        var render = this.render.bind(this),
            update = this.update.bind(this),
            defaults = {
                minDate: d3.time.day.offset(extent[0], -1),
                maxDate: d3.time.day.offset(extent[1], 1)
            },
            from_label = L.DomUtil.create('label', 'timeline-filter-from', container),
            from_text = L.DomUtil.create('span', null, from_label),
            from_input = L.DomUtil.create('input', null, from_label),
            from = jQuery(from_input).datepicker(defaults),
            to_label = L.DomUtil.create('label', 'timeline-filter-to', container),
            to_text = L.DomUtil.create('span', null, to_label),
            to_input = L.DomUtil.create('input', 'timeline-filter-to', to_label),
            to = jQuery(to_input).datepicker(defaults);

        from_text.textContent = 'From: ';
        to_text.textContent = 'To: ';

        from.change(set_filter);
        to.change(set_filter);

        function set_date(range) {
            from.datepicker("setDate", range[0]);
            to.datepicker("setDate", range[1]);
        }

        function set_filter(e) {
            var f = from.datepicker('getDate') || extent[0],
                t = to.datepicker('getDate') || extent[1];

            chart.each(function (method) { method.filter(f < t ? [f, t] : [t, f]); });
            update();
            render();
        }
    },

    update: function () {
        this.chart.each(function (method) {
            d3.select(this).call(method);
        });
    },

    reset: function () {
        this.chart.each(function (method) {
            method.filter();
        });
    }
});

