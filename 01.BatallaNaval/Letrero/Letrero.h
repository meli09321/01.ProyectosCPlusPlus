#ifndef LETRERO_H
#define LETRERO_H

#include <string>
using std::string;

#include "TipoCadena.h"
#include "Letra.h"

class Letrero{
public:
    Letrero();//CONSTRUCTOR DEL LETRERO, CREA BORDES, GUARDA TEXTO
    ~Letrero();//DESTRUCTOR, LIBERA ESPACIO OCUADO POR ARREGLO DE LETRAS
    void Ejecutar();//HACE CORRER LAS FUNCIONES DEL LETRERO
    void InfoTexto()const;//MUESTRA INFORMACIÓN DEL TEXTO
    void LimpiarPantalla(int,int) const;//LIMPIA UNA REGION DE LA PANTALLA
    void DibujarBordes(int,int) const;//DIBUJA BORDES DEL LETRERO
    void (*DibujaLetra)(int,int);//SELECCIONA LA FUNCIÓN QUE DIBUJARÁ A LA LETRA CORRESPONDIENTE
private:
    Cadena Texto;//OBJETO DE TIPO TEXTO, ALMACENA UNA CADENA DE TEXTO
    Letra* letra;//PUNTERO A OBJETO DE TIPO LETRA, SE USARÁ COMO ARREGLO DINÁMICO QUE ALMACENARÁ LAS LETRAS DEL TEXTO
};

#endif // LETRERO_H
