TEMPLATE = subdirs

SUBDIRS += backend plugins
plugins.depends = backend

qtHaveModule(quick) {
    SUBDIRS += quick
    quick.depends = backend
    plugins.depends = quick
}

qtHaveModule(widgets) {
    SUBDIRS += widgets
    widgets.depends = backend
    plugins.depends = widgets
}
