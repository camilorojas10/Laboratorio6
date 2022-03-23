//INCLUYE LIBRERIAS
#include <planeta.h>
#include "planeta.h"

//DEFINICION DEL CONSTRUCTOR
planeta::planeta( float px, float py, float vx, float vy,  float masa, float r){
     this-> px=px;
     this->py=py;
     this->vx=vx;
     this-> vy=vy;
     this-> masa=masa;
     this-> r=r/10; //RADIO DISMINUIDO POR EFECTO DE ESCALA
 }
//DEVUELVE EL RECTANGULO QUE CONTIENE AL OBJETO
    QRectF planeta::boundingRect() const
    {
        float R= this-> r;
        return QRectF(-R,-R,2*R,2*R);
    }

    void planeta::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
    {
        painter->setBrush(Qt::red);        //Asigna el color
        painter->drawEllipse(boundingRect());    //Dibuja una elipse encerrada en la boundingRect
    }
//DEFINICION DE FUNCIONES
void planeta::aceleracion( float m, float xo,  float yo){
    int G=1;     //ACELERACION DE LA GRAVEDAD 1 PARA EFECTO DE CALCULOS
     float X=xo-px;  //X2-X1
     float Y= yo- py;   //Y2-Y1
     float angulo = atan2(Y,X); //ANGULO ENTRE LOS PLANETAS
     float r= ((X*X)+(Y*Y));   //DISTANCIA AL CUADRADO ENTRE LOS PLANETAS
    acex=G*m*cos(angulo)/r;   //ACELERACION EN X
    acey=G*m*sin(angulo)/r;   //ACELERACION EN Y
}
void planeta::velocidad (int t){
    vx= vx +(acex*t);        //VELOCIDAD EN X
    vy= vy+(acey*t);         //VELOCIDAD EN Y
}
void planeta::posicion(int t){
    px= px+(vx*t)+((acex*(t*t))/2);   //POSICION EN X
    py= py+(vy*t)+((acey*(t*t))/2);   //POSICION EN Y

}

 //METODOS PARA OBTENER VARIABLES PRIVADAS
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
//METODOS PARA MODIFICAR VARIABLES
    void planeta::set_ax(float a ){
    this -> acex=a;
    }
    void planeta::set_ay(float a){
        this -> acey=a;
    }
