#include "bullet.h"
#include<QTimer>
#include<QGraphicsScene>
#include<QDebug>
#include<QList>
#include "enemy.h"

Bullet::Bullet(){
    setRect(0,0,10,50);//created bullet size

    //connect
    QTimer * timer= new QTimer();
    connect(timer, SIGNAL(timeout()),this, SLOT(move()));
    timer->start(50);//every 50 milisecond, the signal will be emitted, the bullet will move
    //every bullet has its own timer, and every bullet moves independently

}

void Bullet::move()
{ //if bullet collides with enemy, destroy both
    QList<QGraphicsItem *> colliding_items =collidingItems();
    for (int i=0, n=colliding_items.size();i<n; i++){
        if (typeid(*(colliding_items[i]))==typeid(Enemy))
            //remove them both
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            //delete objects on the heap
            delete colliding_items[i];
            delete this;

    }

    //move bullet up
    setPos(x(),y()-10);
    if (pos().y()<-10){//we delete the bullets when we can not longer see them in the window
        //remove the bullet from the scene before deleting it
        scene()->removeItem(this);
        delete this;
        qDebug() << "bullet deleted";
    }
}
