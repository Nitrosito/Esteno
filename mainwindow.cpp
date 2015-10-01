#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ocultar.h"
#include <QFileDialog>
#include <QDebug>
#include "acercade.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}




//EXPLORADOR DE ARCHIVOS
QString ruta;
void MainWindow::on_pushButton_3_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
    "",
    tr("Files (*)"));
    ruta=fileName;
    ui->lineEdit_3->insert(ruta);
}


void MainWindow::on_pushButton_revelar_clicked()
{
    unsigned char buffer[1000000];
    char frase[1000000];
    int filas, columnas;
    TipoImagen img;
    //imagen a revelar
    img = LeerTipoImagen(ruta.toStdString().c_str(),filas,columnas);

    const char* rutac= ruta.toStdString().c_str();
    qDebug() << img;
     if( img == IMG_PGM){
                LeerImagenPGM(rutac,filas,columnas,buffer);
                Revelar(buffer,frase);
     }
     else if( img == IMG_PPM){
                LeerImagenPPM(rutac,filas,columnas,buffer);
                Revelar(buffer,frase);
     }



        QString fraseq(frase);
        ui->textBrowser->setText(fraseq);

}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAcerca_de_triggered()
{
    AcercaDe *ventanaAcerca = new AcercaDe;
    ventanaAcerca->show();

}
