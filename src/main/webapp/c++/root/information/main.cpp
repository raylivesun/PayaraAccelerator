#include <QtWidgets>
#include "test.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.resize(100, 100);
    w.show();
    return a.exec();
}
