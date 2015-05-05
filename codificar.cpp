#include "codificar.h"
#include <iostream>
#include <cmath>
using namespace std;

void Ocultar(unsigned char buffer[], const char ocultar[]){
    int j ,c;
    j = c = 0;
    bool escape = false;

    while(escape == false){
        char car=ocultar[c];

        for(int i=7; i >=0; i--,j++){
          if( ((1<<i) & car) !=0)
            buffer[j] = buffer[j] | 1;
          else
            buffer[j] = buffer[j] & (~1);
        }

        if(ocultar[c] == '\0')
            escape = true;

        c++;
    }
    cout << "ocultado";
}

void Revelar(unsigned char buffer[],char revelada[]){   //decodifica el mensaje oculto en el buffer

    int j = 0;
    bool escape;
    int c = 0;

    while(escape == false){
        //int codificado[8];
        int suma = 0;
        for(int i = 0, k = 7; i <= 7; i++,k--){
            if( (buffer[c] & 1) != 0){
                suma = suma + pow(2,k);
            }

            c++;
        }
      //  Binariochar(codificado,revelada[j]);
        revelada[j] = suma;
        if(revelada[j] == '\0')
            escape = true;

        j++;
    }
}
