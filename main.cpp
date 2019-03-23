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

    MyRect * player = new MyRect();

    //by default the rec has the length and width of zero

    player->setRect(0,0,100,100); //set the size

    //add the item to the scene

    scene->addItem(player);





    //make rect focusable

    player->setFlag(QGraphicsItem::ItemIsFocusable);

    player->setFocus();





    //add a view

    QGraphicsView * view = new QGraphicsView(scene);


    //quit solution to the "scroll bar getting smaller and smaller problem, as the bullet kept going upward
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


    //show the view & set a fixed  & with equal size of the view
    view->show();
    view->setFixedSize(800, 600);
    scene->setSceneRect(0,0,800,600);
    //setting the player to be at the middle of the bottom
    player->setPos(view->width()/2-50, view->height() - player->rect().height());

    return a.exec();



}
