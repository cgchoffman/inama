Amani.MarkerFactory.include({
    DefaultMarker: function (latlng, options) {
        return L.marker(latlng, { icon: new L.Icon.Default() });
    },

    AwesomeMarker: function (latlng, options) {
        return L.marker(latlng, { icon: L.AwesomeMarkers.icon(options) });
    }
});
