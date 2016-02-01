TEMPLATE = lib
TARGET = exampleplugin

INCLUDEPATH += . ../../shared
CONFIG += plugin
DESTDIR = $$BUILD_TREE/plugins

SOURCES += example.cpp
