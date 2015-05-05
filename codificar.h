/**
  * @file codificar.h
  * @brief Fichero cabecera para ocultar/revelar los mensajes en la imagen
  *
  * Permite ocultar/revelar un mensaje en una imagen
  *
  */


#ifndef _CODIFICAR_H_
#define _CODIFICAR_H_
#include "imagenes.h"


/**
  * @brief Oculta texto en una imagen y se almacena en un array de char
  *
  * @param buffer Array donde se guardará la imagen con el texto ya ocultado.
  * @param ocultar Texto a ocultar en la imagen.
  * @pre buffer debe ser una zona de memoria suficientemente grande como para que se pueda ocultar todo el texto
  */
void Ocultar(unsigned char buffer[], const char ocultar[]);

  /**
  * @brief Revela texto oculto de una imagen y se almacena en un buffer
  *
  * @param buffer Array donde se guardará el texto revelado.
  * @param revelada Texto revelado de la imagen.
  * @pre buffer debe ser una zona de memoria suficientemente grande como para que se pueda almacenar todo el texto
  */
void Revelar(unsigned char buffer[],char revelada[]);


#endif

