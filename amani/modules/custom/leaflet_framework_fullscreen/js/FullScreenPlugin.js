LF.FullScreen = LF.Plugin.extend({
    enable: function (map) {
        this._control = L.control.fullscreen(this.options).addTo(map);
    }
});
