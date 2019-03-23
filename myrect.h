#ifndef MYRECT_H
#define MYRECT_H

#include<QGraphicsRectItem> //class that we inherit from
#include "bullet.h"
#include<QKeyEvent>
#include<QObject>
class MyRect: public QObject, public QGraphicsRectItem{ //derived from qt rec +the ability to respond to key pressed event
    Q_OBJECT
public:

    void keyPressEvent(QKeyEvent* event);
public slots:
    void spawn();

};



#endif // MYRECT_H
