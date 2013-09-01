Amani.FilterFactory = Amani.Factory.extend({});
Amani.MarkerFactory = Amani.Factory.extend({});

Amani.IncidentReports = LF.Plugin.extend({

    initialize: function (options) {
        LF.Plugin.prototype.initialize.call(this, options);

        this._filters = [];
        this._markers = L.layerGroup();
    },

    enable: function (map) {
        var url = this.options['source-url'];

        this._toggle = Amani.toggle({ name: 'markerclusterer' }).addTo(map),
        this._toggle.on('toggle', this._render, this);

        jQuery.get(url, L.Util.bind(this._onLoad, this));
        this._map = map;
    },

    _onLoad: function (resp) {
        var i, filter, cf, definition,
            filter_factory = new Amani.FilterFactory(),
            marker_factory = this._marker_factory = new Amani.MarkerFactory();

        cf = crossfilter(resp.features);
        this._dimension = cf.dimension(function (f) { return f.properties.uri; });

        for (i in this.options.filters) {
            definition = this.options.filters[i];
            filter = filter_factory.get(definition.provider, definition, cf, resp.features);
            filter.on('update', this._update, this);
            this._filters.push(filter);
        }

        this._update();
        this._markers.addTo(this._map);

        var reset = L.DomUtil.create('a', 'incident-report-filter-reset');
        reset.href = '#';
        reset.textContent = "Reset filters";
        L.DomEvent.on(reset, 'click', L.DomEvent.preventDefault);
        L.DomEvent.on(reset, 'click', function () {
            this._reset();
        }, this);
        jQuery(this._map._container.parentElement).prepend(reset);
    },

    _setData: function (features) {
        var markers = features.map(this._marker, this);
        this._markers.eachLayer(function (layer) { layer.addLayers(markers) });
    },

    _marker: function (feature) {
        return L.GeoJSON.geometryToLayer(feature, function (geojson, latlng) {
            var definition = feature.properties.marker || { provider: 'DefaultMarker' },
                marker = this._marker_factory.get(definition.provider, latlng, definition),
                markup = geojson.properties.teaser || null;

            if (!markup) {
                markup = L.DomUtil.create('h3', 'incident-report-popup-title');
                var link = L.DomUtil.create('a', null, markup);
                link.href = geojson.properties.uri;
                link.textContent = geojson.properties.title;
            }

            return marker.bindPopup(markup);
        }.bind(this));
    },

    _render: function () {
        this._markers.clearLayers();
        this._markers.addLayer(this._toggle.enabled() ? new L.MarkerClusterGroup() : L.featureGroup());
        this._setData(this._dimension.top(Infinity));
    },

    _update: function () {
        this._filters.forEach(function (filter) { filter.update(); });
        this._render();
    },

    _reset: function () {
        this._filters.forEach(function (filter) { filter.reset() });
        this._render();
    }

});

L.LayerGroup.include({
    addLayers: function (layers) {
        layers.forEach(function (layer) {
            this.addLayer(layer);
        }, this);
    }
});
