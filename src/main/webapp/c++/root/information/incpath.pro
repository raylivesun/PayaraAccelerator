TEMPLATE = app
TARGET =
CONFIG += console
QT += widgets
#Input
SOURCES += main.cpp
INCLUDE-PATH += ../staticLibrary
LIBS += -L../staticLibrary/debug -staticLibrary
