#include "gravitaion.h"

planeta::planeta( float px, float py, float vx, float vy,  float masa, float r){
     this-> px=px;
     this->py=py;
     this->vx=vx;
     this-> vy=vy;
     this-> masa=masa;
     this-> r=r/10;

 }
    QRectF planeta::boundingRect() const
    {
        float R= this-> r;
        return QRectF(-R,-R,2*R,2*R);
    }

    void planeta::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
    {
        painter->setBrush(Qt::blue);        //asigna el color
        painter->drawEllipse(boundingRect());    //dibuja una elipse encerrada en la boundingRect
    }
    void planeta::aceleracion( float m, float xo,  float yo){
        int G=1;
         float X=xo-px;
         float Y= yo- py;
         float angulo = atan2(Y,X);
         float r= ((X*X)+(Y*Y));
        acex=G*m*cos(angulo)/r;
        acey=G*m*sin(angulo)/r;
    }
    void planeta::velocidad (int t){
        vx= vx +(acex*t);
        vy= vy+(acey*t);
    }
    void planeta::posicion(int t){
        px= px+(vx*t)+((acex*(t*t))/2);
        py= py+(vy*t)+((acey*(t*t))/2);

    }
    float planeta::get_px(){
        return px;
    }
     float planeta::get_py(){
        return py;
    }
     float planeta::get_m(){
        return masa;
    }
    float planeta::get_ax(){
        return acex;
    }
     float planeta::get_ay(){
        return acey;
    }

    void planeta::set_ax(float a ){
    this -> acex=a;
    }
    void planeta::set_ay(float a){
        this -> acey=a;
    }
