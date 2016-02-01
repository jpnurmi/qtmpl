TEMPLATE = app
TARGET = quick-tmpl

QT += qml quick
CONFIG += c++11
DESTDIR = $$BUILD_TREE/bin

SOURCES += main.cpp
RESOURCES += quick.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

qtmplAddLibrary(backend)
include(../shared/shared.pri)
include(deployment.pri)

osx {
    # TODO
    plugins.files += $$BUILD_TREE/plugins/libexampleplugin.$$QMAKE_EXTENSION_SHLIB
    plugins.path = Contents/PlugIns
    QMAKE_BUNDLE_DATA += plugins
}
