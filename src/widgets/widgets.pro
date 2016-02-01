TEMPLATE = app
TARGET = widgets-tmpl

QT += widgets
DESTDIR = $$BUILD_TREE/bin

FORMS += mainwindow.ui
HEADERS += mainwindow.h
SOURCES += main.cpp mainwindow.cpp

qtmplAddLibrary(backend)
include(../shared/shared.pri)

osx {
    # TODO
    plugins.files += $$BUILD_TREE/plugins/libexampleplugin.$$QMAKE_EXTENSION_SHLIB
    plugins.path = Contents/PlugIns
    QMAKE_BUNDLE_DATA += plugins
}
