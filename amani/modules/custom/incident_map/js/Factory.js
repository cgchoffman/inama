Amani.Factory = L.Class.extend({
    options: {
        type: undefined,
    },

    initialize: function (options) {
        L.setOptions(this, options);
    },

    get: function (provider) {
        if (provider in this) {
            var factory = this[provider];
            return factory.apply(this, Array.prototype.splice.call(arguments, 1));
        }
        else {
            throw new Error('Unknown "' + this.options.type + '" factory provider: ' + provider);
        }
    }
});
