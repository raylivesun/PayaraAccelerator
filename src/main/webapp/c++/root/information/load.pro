TEMPLATE = app
TARGET =
DEPEND-PATH += . ../testLib
INCLUDE-PATH += ../testLib
LIBS += -L../testLib/debug -latestLib
#Input
SOURCES += main.cpp