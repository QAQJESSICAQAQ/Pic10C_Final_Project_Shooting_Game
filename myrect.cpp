#include "myrect.h"
#include "bullet.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "enemy.h"


#include<QDebug>

void MyRect::keyPressEvent(QKeyEvent *event){
    if (event->key()==Qt::Key_Left){
        if (pos().x()>0)
        setPos(x()-10,y());
    }
    if (event->key()==Qt::Key_Right){
        if (pos().x()+100<800)
        setPos(x()+10,y());
    }
    if (event->key()==Qt::Key_Up){
        if (pos().y()>0)
        setPos(x(),y()-10);
    }
    if (event->key()==Qt::Key_Down){
        if (pos().y()+100<600)
        setPos(x(),y()+10);
    }
    else if (event->key()==Qt::Key_Space){
        //create a bullet
        Bullet * bullet=new Bullet();
       bullet->setPos(x(),y());
       scene()->addItem(bullet);
    }


}

void MyRect::spawn()
{//CREATE AN ENEMY
    Enemy * enemy = new Enemy();
    scene()->addItem(enemy);

}



