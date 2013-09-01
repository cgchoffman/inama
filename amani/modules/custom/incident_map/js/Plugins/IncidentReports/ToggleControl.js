Amani.Toggle = L.Control.extend({
    includes: L.Mixin.Events,

    options: {
        name: 'default',
        position: 'topright',
        enabled: true
    },

    initialize: function (options) {
        L.Control.prototype.initialize.call(this, options);
        this._toggle = this.options.enabled;
    },

    enabled: function () {
        return this._toggle;
    },

    onAdd: function (map) {
        var class_name = 'amani-control-' + this.options.name + '-toggle',
            container = this._container = L.DomUtil.create('div', class_name),
            inner = L.DomUtil.create('div', null, container),
            form = L.DomUtil.create('form', class_name + '-form', inner),
            toggle = L.DomUtil.create('input', class_name + '-toggle', form);

        L.DomUtil.addClass(container, this._toggle ? 'enabled' : 'disabled');

        toggle.type = 'checkbox';
        toggle.checked = this._toggle ? 'checked' : '';

        L.DomEvent.on(toggle, 'dblclick', L.DomEvent.stopPropagation);
        L.DomEvent.on(toggle, 'click', L.DomEvent.stopPropagation);
        L.DomEvent.on(toggle, 'click', this._onInputClick, this);
        L.DomEvent.on(container, 'dblclick', L.DomEvent.stopPropagation);
        L.DomEvent.on(container, 'click', L.DomEvent.stopPropagation);
        L.DomEvent.on(container, 'click', function (e) {
            this._onInputClick(e);
            // Allow clicks on container to also toggle control & ensure
            // checkbox is synchronized.
            toggle.checked = this._toggle ? 'checked' : '';
        }, this);

        return container;
    },

    _onInputClick: function () {
        this._toggle = !this._toggle;
        L.DomUtil.removeClass(this._container, this._toggle ? 'disabled' : 'enabled');
        L.DomUtil.addClass(this._container, this._toggle ? 'enabled' : 'disabled');
        this.fire('toggle', { enabled: this._toggle });
    }
});

Amani.toggle = function (options) {
    return new Amani.Toggle(options);
};
