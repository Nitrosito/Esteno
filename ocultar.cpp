/*#include <iostream>
#include "ocultar.h"
using namespace std;

int main(int argc, char const *argv[])
{
    TipoImagen tipo;
    unsigned char buffer[1000000];
    char frase[150];
    char nombre_salida[30];
    int filas, columnas;

    if(argc == 1){
        char nombre_entrada[30];

        cout << "Introduzca el nombre de la imagen de entrada\n";
        cin.getline(nombre_entrada,100,'\n');

        cout << "Introduzca la frase a ocultar:\n";
        cin.getline(frase,100,'\n');

        cout << "Escriba el nombre de la imagen resultante:\n";
        cin.getline(nombre_salida,100,'\n');

        tipo =LeerTipoImagen(nombre_entrada,filas, columnas);

        if(tipo == 0){
            cout << "error al leer imagen de entrada"; return -1;
        }
        else{
            if(tipo == IMG_PPM){
                LeerImagenPPM(nombre_entrada,filas,columnas,buffer);
                Ocultar(buffer,frase);
                EscribirImagenPPM(nombre_salida,buffer,filas,columnas);
            }
            else{
              LeerImagenPGM(nombre_entrada,filas,columnas,buffer);
              Ocultar(buffer,frase);
              EscribirImagenPGM(nombre_salida,buffer,filas,columnas);
            }
        }
    }
    else{

        cout << "Introduzca la frase a ocultar:\n";
        cin.getline(frase,100,'\n');

        cout << "Escriba el nombre de la imagen resultante:\n";
        cin.getline(nombre_salida,100,'\n');

        tipo =LeerTipoImagen(argv[1],filas, columnas);

        if(tipo == 0){
            cout << "error al leer imagen de entrada"; return 1;
        }
        else{
            if(tipo == IMG_PPM){
                LeerImagenPPM(argv[1],filas,columnas,buffer);
                Ocultar(buffer,frase);
                EscribirImagenPPM(nombre_salida,buffer,filas,columnas);
            }
            else{
              LeerImagenPGM(argv[1],filas,columnas,buffer);
              Ocultar(buffer,frase);
              EscribirImagenPGM(nombre_salida,buffer,filas,columnas);
            }
        }
    }

    cout << endl;
}

*/
