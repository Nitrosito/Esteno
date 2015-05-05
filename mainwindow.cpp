#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ocultar.h"
#include <QFileDialog>

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
    char imagen[10000];
    //imagen a revelar
    img = LeerTipoImagen(imagen,filas,columnas);

    const char* rutac= ruta.toStdString().c_str();

        if( img == IMG_PGM)
            LeerImagenPGM(rutac,filas,columnas,buffer);
        else
            LeerImagenPPM(rutac,filas,columnas,buffer);

        Revelar(buffer,frase);

        QString fraseq(frase);
        ui->textBrowser->setText(fraseq);

}



MainWindow::~MainWindow()
{
    delete ui;
}
