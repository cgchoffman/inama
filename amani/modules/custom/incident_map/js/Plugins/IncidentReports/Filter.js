Amani.Filter = L.Class.extend({
    includes: L.Mixin.Events,

    render: function () {
        this.fire('update');
    },

    update: function () {},

    reset: function () {}
});
