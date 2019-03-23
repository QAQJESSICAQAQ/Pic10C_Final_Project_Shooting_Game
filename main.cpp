#include<QApplication>

#include<QGraphicsScene>

#include "myrect.h"

#include<QGraphicsView>

int main(int argc, char *argv[])

{

    QApplication a(argc, argv);



    //creating a scene

    QGraphicsScene * scene = new QGraphicsScene();

   //creating an item to put into the scene

    MyRect * rect = new MyRect();

    //by default the rec has the length and width of zero

    rect->setRect(0,0,100,100); //set the size

    //add the item to the scene

    scene->addItem(rect);





    //make rect focusable

    rect->setFlag(QGraphicsItem::ItemIsFocusable);

    rect->setFocus();





    //add a view

    QGraphicsView * view = new QGraphicsView(scene);
    //quit solution to the "scroll bar getting smaller and smaller problem, as the bullet kept going upward
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();

    return a.exec();



}
