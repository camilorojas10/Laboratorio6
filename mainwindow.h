#ifndef MAINWINDOW_H
#define MAINWINDOW_H
//INCLUIR LAS LIBRERIAS
#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include <list>
#include <planeta.h>


//ESPACIO DE NOMBRES
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

//RANURAS
private slots:

    void mover();
    void on_ingresar_clicked();//boton para ingresar valores
    void on_simular_clicked();//metodo para iniciar la simulacion
    void on_verificar_clicked();//metodo para verificar donde esta situado el planeta

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QTimer *timer;
    list<planeta *> planetas;//lista de tipo planeta para guardar los objetos planeta que se creen
    planeta * mostrar;//objeto de tipo planeta
    bool borrar=false;

};

#endif // MAINWINDOW_H


