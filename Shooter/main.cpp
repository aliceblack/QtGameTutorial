#include "mainwindow.h"
#include "world.h"
#include <QApplication>

World * world;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    world = new World();
    world->show();

    return a.exec();
}
