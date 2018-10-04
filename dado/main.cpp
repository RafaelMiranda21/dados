#include "dados.h"
#include "dados.cpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dados w;
    w.show();

    return a.exec();
}
