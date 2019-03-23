#include "enemy.h"
#include<QTimer>
#include<QGraphicsScene>
#include<QDebug>
#include<stdlib.h> //rand()-> really large int

Enemy::Enemy(){
    //set random position
    int random_number = rand()% 700; //enemy cannot be off the screen
    setPos(random_number, 0);


    setRect(0,0,100,100);//same size as the player

    //connect
    QTimer * timer= new QTimer();
    connect(timer, SIGNAL(timeout()),this, SLOT(move()));
    timer->start(50);
}

void Enemy::move()
{//move Enemy down
    setPos(x(),y()+5);
    if (pos().y()<-10){//we delete the bullets when we can not longer see them in the window
        //remove the bullet from the scene before deleting it
        scene()->removeItem(this);
        delete this;

    }
}
