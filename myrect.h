#ifndef MYRECT_H
#define MYRECT_H

#include<QGraphicsRectItem> //class that we inherit from
#include "bullet.h"
#include<QKeyEvent>
class MyRect: public QGraphicsRectItem{ //derived from qt rec +the ability to respond to key pressed event

public:

    void keyPressEvent(QKeyEvent* event);

};



#endif // MYRECT_H
