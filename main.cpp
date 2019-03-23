
#include<QApplication>
#include<QGraphicsScene>
#include<QGraphicsRectItem>
#include<QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //creating a scene
    QGraphicsScene * scene = new QGraphicsScene();
   //creating an item to put into the scene
    QGraphicsRectItem * rect = new QGraphicsRectItem();
    //by default the rec has the length and width of zero
    rect->setRect(0,0,100,100); //set the size
    //add the item to the scene
    scene->addItem(rect);
    //add a view
    QGraphicsView * view = new QGraphicsView(scene);
    view->show();
    return a.exec();

}
