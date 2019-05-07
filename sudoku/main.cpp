#include "sudokuui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sudokuUI w;
    w.show();

    return a.exec();
}
