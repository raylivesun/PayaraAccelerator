#include "test.h"
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.resize(100, 100);
    w.show();
    return a.exec();
}