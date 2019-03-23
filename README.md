# Pic10C_Final_Project_Shooting_Game
Original purpose: implementing a oreo game using qt

[Oreoo repository (failed)](https://github.com/QAQJESSICAQAQ/Pic10C_Final-Project/edit/master/README.md) 

NOW CHANGES DUE TO LACK OF SKILLS---IMPLEMENTING A PLANE SHOOTING GAME

## Getting Started

Watching qt tutorials (knowledge needed to implement the game)

* Openning new windows

* QPix



DAY 1 Project Starts

* QGraphicsScene -- container of all of my game objects, like a map. 

* QGraphicsItem (QGraphicsRecItem)-- objects in QGraphicsItem and its subclasses goes inside the scene.

* QGraphicsView --the widget that visualize the scene.



DAY 2 ---creating a rectangle that moves corresponding to the up/down/left/right key

* Events -- KeyPressEven() and QKeyEvent

* Event Propagation System --the order in which the event is passed around

* Header file QDebug


DAY 3 ---creating a bullet class (retangle will shoot when the space is pressed)

* QTimer

* Signals and Slots (learned in lecture)-- the bullet class has to inherit from QObject

* QObject and Q_OBJECT macro --the bullet class also need to include a QOBJECT macro


DAY 4 ---making the window start at large and keep the original rectangle always at the bottom so it can shoot 

* Coordinate systems included:

* QGraphicsView, QGraphicsScene, QGraphicsItem

* set the scene size-->so the scene will not get bigger even if the object gets bigger than the scene
 


DAY 5 ---fixing little problems and add enemy to the game


* opps we just found out that the player can go outside of the view, need to fix that

* we hope to randomly create several player on the top (going down), and the player can shoot bullets at them

* the bullet will destroy the enemy when thet meet, and both the enemy and the bullet are being destoyed
 




## Acknowledgments

After realizing the oreo app needs qt 3D creator I decided to switch to a simpler game, which only involves the regular qt creator (by follwing a qt game tutorial). 



* [QT](https://www.youtube.com/watch?v=EkjaiDsiM-Q&list=PLS1QulWo1RIZiBcTr5urECberTITj7gjA) - Qt basics Tutorials
* [QT_Games](https://www.youtube.com/watch?v=8ntEQpg7gck&list=PLyb40eoxkelOa5xCB9fvGrkoBf8JzEwtV&index=1)-QT game tutorial


