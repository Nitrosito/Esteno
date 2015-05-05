/*#include <iostream>
#include <cmath>
#include "revelar.h"
using namespace std;

int main(int argc, char const *argv[])
{
    unsigned char buffer[1000000];
    char frase[1000000];
    int filas, columnas;
    TipoImagen img;

    if(argc == 1){
        char imagen[10000];

        cout << "Introduce la imagen a revelar:\n";
        cin.getline(imagen,100,'\n');

        img = LeerTipoImagen(imagen,filas,columnas);

        if(img == 0)
          return 0;

        if( img == IMG_PGM)
            LeerImagenPGM(imagen,filas,columnas,buffer);
        else
            LeerImagenPPM(imagen,filas,columnas,buffer);

        Revelar(buffer,frase);

        for(int i = 0; (frase[i] | 0) != '\0'; i++)
          cout << frase[i];
        cout << endl;
    }
    else{
        img = LeerTipoImagen(argv[1],filas,columnas);

        if(img == 0)
          return 0;

        if( img == IMG_PGM)
            LeerImagenPGM(argv[1],filas,columnas,buffer);
        else
            LeerImagenPPM(argv[1],filas,columnas,buffer);

        Revelar(buffer,frase);

        for(int i = 0; (frase[i] | 0) != '\0'; i++)
          cout << frase[i];
        cout << endl;
    }

}

*/
