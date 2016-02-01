TEMPLATE = app
TARGET = tst_backendmodel

QT += testlib
CONFIG += testcase
CONFIG -= app_bundle

SOURCES += tst_backendmodel.cpp

qtmplAddLibrary(backend)
