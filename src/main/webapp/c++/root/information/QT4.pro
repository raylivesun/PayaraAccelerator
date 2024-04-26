headersDataFiles.path = $$[QT_INSTALL_HEADERS]/MyLib/
headersDataFiles.files = $$PWD/src/*.h
INSTALLS += headersDataFiles

libraryFiles.path = $$[QT_INSTALL_LIBS]
CONFIG(debug, debug|release):libraryFiles.files = $$OUT_PWD/debug/*.a $$OUT_PWD/debug/*.prl
CONFIG(release, debug|release):libraryFiles.files = $$OUT_PWD/release/*.a $$OUT_PWD/release/*.prl
INSTALLS += libraryFiles
