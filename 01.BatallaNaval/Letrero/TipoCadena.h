#ifndef TIPOCADENA_H
#define TIPOCADENA_H

#include <iostream>
using std::ostream;

class Cadena{
    friend class Letrero;//CLASE LETRERO ES AMIGO DE CADENA, YA QUE ACCEDE A DATOS DE LA CADENA DE TEXTO
    friend ostream& operator<<(ostream&,const Cadena&);//OPERADOR << SOBRECARGADO
public:
    Cadena();//CONSTRUCTOR PREDETERMINADO
    Cadena(const char*);//CONSTRUCTOR A PARTIR DE CADENA DE TEXTO CONSTANTE
    ~Cadena();//DESTRUCTOR
    int GetLongitud()const;//GETTER, DEVUELVE LONGITUD DE LA CADENA
    int LeerCadena();//SETTER, ALMACENA UNA CADENA DE MANERA DINAMICA
    char* GetCadena() const;//GETTER, DEVUELVE LA CADENA ALMACENADA
private:
    const int MaxLongitud;//CONSTANTE QUE ALMACENA LA LONGITUD MAXIMA DE LA CADENA
    int longitud;//LONGITUD DE LA CADENA
    char* cadena;//PUNTERO A CHAR, ALMACENA UNA CADENA DINÁMICA
};

#endif // TIPOCADENA_H
