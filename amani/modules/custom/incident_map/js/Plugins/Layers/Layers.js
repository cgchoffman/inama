Amani.LayerFactory.include({
    google: function (options) {
        return L.google(options.set, options);
    }
});

Amani.LayerFactory.include({
    tilelayer: function (options) {
        var url = options.urlTemplate;
        return L.tileLayer(url, options);
    }
});
