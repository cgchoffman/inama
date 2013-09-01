Amani.FilterFactory.include({
    category: function (options, cf, data) {
        var container = document.getElementById(options.container),
            dimension = cf.dimension(function (f) { return f.properties[options.key] || options.empty; });

        return new Amani.CategoryFilter(dimension, container, options);
    }
});

Amani.CategoryFilter = Amani.Filter.extend({
    initialize: function (dimension, container, options) {
        this._filter = Amani.filterControl({ dimension: dimension, type: options.type });

        this._filter.on('filter', function (e) {
            dimension.filterAll();
            dimension.filter(function (f) {
                return e.active.length === 0 ? true : jQuery.inArray(f, e.active) >= 0;
            });
            this.render();
        }, this);

        container.appendChild(this._filter.container());
    },

    update: function () {
        this._filter.update();
    },

    reset: function () {
        this._filter.reset();
    }
});

