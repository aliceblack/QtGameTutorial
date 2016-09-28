#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QKeyEvent>
#include "bullet.h"
#include "enemy.h"

class Player:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
private:
    QPixmap p;
public:
    Player(){
        setPixmap(QPixmap("../BasicShooter/a.png"));
    }
    void keyPressEvent(QKeyEvent * event){
        // move the player left and right
        if (event->key() == Qt::Key_Left){
            if (pos().x() > 0)
            setPos(x()-10,y());
        }
        else if (event->key() == Qt::Key_Right){
            if (pos().x() + 100 < 800)
            setPos(x()+10,y());
        }
        // shoot with the spacebar
        else if (event->key() == Qt::Key_Space){
            // create a bullet
            Bullet * bullet = new Bullet();
            bullet->setPos(x()+5,y()-10);
            scene()->addItem(bullet);

            // play bulletsound

        }
    }
public slots:
    void spawn(){
        // create an enemy
        Enemy * enemy = new Enemy();
        scene()->addItem(enemy);
    }
};

#endif // PLAYER_H
