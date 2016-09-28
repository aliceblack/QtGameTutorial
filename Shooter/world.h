#ifndef WORLD_H
#define WORLD_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "player.h"
#include "score.h"
#include "health.h"

class World: public QGraphicsView{
public:
    World(QWidget * parent=0);
    QGraphicsScene * scene;
    Player * player;
    Score * score;
    Health * health;
};

#endif // WORLD_H


