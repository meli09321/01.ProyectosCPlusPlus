#include <cstdio>
using std::getchar;

#include <cstdlib>
using std::realloc;

#include <cstring>
using std::strcmp;
using std::strcpy;

#include "TipoCadena.h"

Cadena::Cadena():MaxLongitud(100){//CONSTRUCTOR DE OBJETO CADENA, INICIALIZA LA CONSTANTE DE LONGITUD MAXIMA EN 100
    cadena = NULL;//INICIALIZA LA CADENA
    longitud = 0;//INICIALIZA LONGITUD
}

Cadena::Cadena(const char* s):MaxLongitud(100){//CONSTRUCTOR A PARTIR DE CADENA DE TEXTO CONSTANTE
    longitud = strlen(s);
    if(longitud >= MaxLongitud){//SI LA LONGITUD DE LA CADENA ES MAYOR QUE LA MAXIMA PERMITIDA
        longitud = MaxLongitud;//ASIGNAR LA LONGITUD MAXIMA (LA CADENA SERA TRUCADA)
    }
    cadena = new char[longitud + 1];
    strncpy(cadena,s,longitud);
    cadena[longitud] = '\0';
}

Cadena::~Cadena(){//DESTRUCTOR
    if(longitud != 0){//SI LA LONGITUD NO ES 0
        free(cadena);//LIBERAR ESPACIO OCUPADO POR LA CADENA
        longitud = 0;//INICIALIZAR LONGITUD
    }
}

int Cadena::GetLongitud()const{//DEVUELVE LA LONGITUD DE LA CADENA
    return longitud;
}

int Cadena::LeerCadena(){//LEE UNA CADENA DE MANERA DINÁMICA, LIMITADA POR LA LONGITUD MAXIMA
    int i = 1;
    char c;
    while(((c = getchar()) != '\n')&&(i < MaxLongitud)){
        cadena = (char*)realloc(cadena,(i+1)*sizeof(char));
        if(cadena == NULL){
            free(cadena);
            cadena = NULL;
            return 0;
        }
        cadena[i-1] = c;
        cadena[i] = '\0';
        i++;
    }
    if((cadena == NULL)||(strcmp(cadena," ")==0)){
        free(cadena);
        cadena = NULL;
        return 0;
    }else{
        longitud = i - 1;
        return 1;
    }
}

char* Cadena::GetCadena() const{//RETORNA LA CADENA
    return cadena;
}

ostream& operator<<(ostream& salida,const Cadena& cadena){
    salida<<cadena.cadena;
    return salida;
}
