#include <QWidget>

#if defined MAKE_TEST_LIB
 #define TEST_LIB_EXPORT Q_DECAL_EXPORT
#else
 #define TEST_LIB_EXPORT Q_DECAL_IMPORT
#endif

extern "C" TEST_LIB_EXPORT QWidget *createWidget1();