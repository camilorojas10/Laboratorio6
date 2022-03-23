#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
     ui->setupUi(this);
    scene=new QGraphicsScene; //CREAR UNA ESCENA
    timer=new QTimer;         //CREAR UN TIEMPO
    ui->graphicsView->setScene(scene); //AÑADIR LA VISTA A LA ESCENA
    scene->setSceneRect(-500,-300,1000,600); //CREAR UN RECTANGULO A LA ESCENA
    scene->addRect(scene->sceneRect()); //AÑADIR RECTANGULO A LA ESCENA

    connect(timer,SIGNAL(timeout()),this,SLOT(mover())); //CONECTAR SEÑALES Y RANURAS TIEMPO CON LA FUNCION MOVER
}

MainWindow::~MainWindow()
{
    delete mostrar;
    delete timer;
    delete scene;
    delete ui;
}

//FUNCION PARA MOVER EL PLANETA
void MainWindow::mover()
{
 //CICLOS PARA INTERACTUAR UN PLANETA CON EL RESTO, me paro en un planeta y lo comparo con respecto a los demas
    for(list<planeta*>::iterator pos=planetas.begin(); pos != planetas.end(); ++pos){//for para iterar sobre la lista planetas
    float ax=0,ay=0;//inicializp la acelaracion en x y en y en 0
     for(list<planeta*>::iterator pos1 =planetas.begin(); pos1 != planetas.end(); ++pos1){
               //comparacion de los dos planetas
         if (pos != pos1) //CONDICION PARA NO INTERACCION DE UN PLANETA CON EL MISMO
                {
                (*pos)->aceleracion((*pos1)->get_m(), (*pos1)->get_px(),(*pos1)->get_py()) ; //ACELERACION DE UN PLANETA CON RESPECTO A LOS OTROS
                ax=ax+ (*pos)->get_ax(); //SUMA DE LAS ACELERACIONES EN X OCACIONADAS DEBIDO A LOS OTROS PLANETAS
                ay=ay+ (*pos)->get_ay(); //SUMA DE LAS ACELERACIONES EN Y OCACIONADAS DEBIDO A LOS OTROS PLANETAS
                }
            }
            (*pos)->set_ax(ax);  //MODIFICAR ACELERACION EN X
            (*pos)->set_ay(ay);  //MODIFICAR ACELERACION EN Y
            (*pos)->velocidad(1); //CALCULAR VELOCIDAD DEL PLANETA
            (*pos)->posicion(1); //CALCULAR POSICION DEL PLANETA
           (*pos)-> setPos(((*pos)->get_px())/30,-((*pos)->get_py())/30); //MODIFICAR POSICION DE LOS PLANETAS
    }
}

void MainWindow::on_ingresar_clicked()
{
    if(borrar)
    {
        scene->removeItem(mostrar);
        borrar=false;
    }
    float px=ui->posX->value();
    float py=ui->posY->value();
    float vx=ui->velX->value();
    float vy=ui->velY->value();
    float masa=ui->masa->value();
    float r=ui->radio->value();
    planetas.push_back(new planeta( px,  py,  vx,  vy, masa,  r));

}

void MainWindow::on_simular_clicked()
{
     //CICLO PARA RECORRER EL CONTENEDOR CON UN ITERADOR
    for(std::list<planeta*>::iterator it=planetas.begin(); it != planetas.end(); ++it){
            scene->addItem((*it));  //AÑADIR OBJETO DE LA LISTA A LA ESCENA
    }
    timer->start(1);  //INICIAR TIEMPO
}

void MainWindow::on_verificar_clicked()
{
    if(borrar)
        scene->removeItem(mostrar);

    float px=ui->posX->value();
    float py=ui->posY->value();
    float vx=ui->velX->value();
    float vy=ui->velY->value();
    float masa=ui->masa->value();


    mostrar= new planeta( px,  py,  vx,  vy, masa,  100);

    mostrar->setPos(px/30,-py/30);
    scene->addItem(mostrar);
    borrar=true;
}
