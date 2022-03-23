#ifndef PLANETA_H
#define PLANETA_H
#include <fstream>
#include <iostream>
#include <string>
#include <cmath>
#include <QGraphicsItem>
#include <QPainter>
#include <cstdlib>
#include <time.h>
#include<math.h>

class planeta:public QGraphicsItem
{
private:
    float px,py,vx,vy,masa,acex,acey,r;
public:
    planeta(float px,float py,float vx,float vy, float masa,float r);
    QRectF boundingRect() const;    //necesario definirla, devuelve el rectangulo que encierra el objeto
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);//define como se pintara el objeto
    planeta(float px,float py,float vx,float vy, float masa);
    void aceleracion(float m, float xo, float yo);
    void velocidad (int t);
    void posicion(int t);
    float get_px();
    float get_py();
    float get_m();
    float get_ax();
    float get_ay();
    void set_ax(float a );
    void set_ay(float a);

};

#endif // PLANETA_H
