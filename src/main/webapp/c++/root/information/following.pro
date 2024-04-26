win32:CONFIG (release, debug|release): LIBS += -L$$PWD/build-MyLibrary/ -library
else:win32:CONFIG (debug, debug|release): LIBS += -L$$PWD/build-MyLibrary/ -library
else:unix: LIBS += -L$$PWD/build-MyLibrary/ -lMyLibrary

INCLUDE-PATH += $$PWD/build-MyLibrary
DEPEND-PATH += $$PWD/build-MyLibrary
