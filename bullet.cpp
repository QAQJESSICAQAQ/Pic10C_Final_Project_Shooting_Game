#include "bullet.h"
#include<QTimer>

Bullet::Bullet(){
    setRect(0,0,10,50);//created bullet size

    //connect
    QTimer * timer= new QTimer();
    connect(timer, SIGNAL(timeout()),this, SLOT(move()));
    timer->start(50);//every 50 milisecond, the signal will be emitted, the bullet will move
    //every bullet has its own timer, and every bullet moves independently

}

void Bullet::move()
{//move bullet up
    setPos(x(),y()-10);

}
