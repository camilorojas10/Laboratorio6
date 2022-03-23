#ifndef BOLITA_H
#define BOLITA_H

#include <QGraphicsItem>
#include <QPainter>
#include <cmath>
#include<math.h>

class planeta:public QGraphicsItem
{
private:
 //VARIABLES
    float px,py,vx,vy,masa,acex,acey,r;
public:
    planeta(float px,float py,float vx,float vy, float masa,float r);//metodo constructor de la clase planeta
    QRectF boundingRect() const;    //Devuelve el rectangulo que encierra el objeto
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget); //metodo para definir como se pintará el objeto

//PROTOTIPO de los metodos
    void mover(int x0, int y0, int w, int h);//metodo para mover el planeta so
    planeta(float px,float py,float vx,float vy, float masa);//constructor de la clase planeta
    void aceleracion(float m, float xo, float yo);//metodo para las ecuaciones de aceleracion
    void velocidad (int t);//metodo para las ecuaciones de velocidades que dedepende de aceleracion y el tiempo
    void posicion(int t);//metodo para las ecuaciones de posicion que dependen de la aceleracion y el tiempo
//METODOS get
    float get_px();
    float get_py();
    float get_m();
    float get_ax();
    float get_ay();
//METODOS set
    void set_ax(float a );
    void set_ay(float a);
};

#endif // BOLITA_H
