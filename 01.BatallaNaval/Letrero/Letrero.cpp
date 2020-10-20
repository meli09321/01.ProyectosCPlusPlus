#ifdef _WIN32
    #include <windows.h>
    #include <conio.h>
#endif // _WIN32

#include <cstdlib>
#include <cstdio>
using std::getchar;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;
using std::getline;

#include <cstring>
#include "Letrero.h"

Letrero::Letrero(){//CONSTRUCTOR
    cout<<"Texto a Mostrar : ";//SOLICITA TEXTO A MOSTRAR
    Texto.LeerCadena();//LEE EL TEXTO DE MANERA DINAMICA
    strcpy(Texto.cadena,strupr(Texto.cadena));//CONVIERTE LA CADENA A MAYUSCULAS
    letra = new Letra[Texto.longitud];//RESERVA MEMORIA PARA ARREGLO DE LETRAS (DESCOMPONE LA CADENA)
    DibujarBordes(2,20);//DIBUJA EL MARCO DEL LETRERO
}

Letrero::~Letrero(){//DESTRUCTOR
    delete [] letra;//LIBERA LA MEMORIA UTILIZADA POR ARREGLO DE LETRAS
    free(Texto.cadena);//LIBERA MEMORIA UTILIZADA POR CADENA
}

void Letrero::InfoTexto()const{//MUESTRA INFORMACIÓN REFERENTE AL TEXTO
    cout << "Cadena : " << Texto.GetCadena() <<endl;//MUESTA LA CADENA INGRESADA
    cout << "Longitud : " << Texto.GetLongitud()<<endl;//MUESTRA LONGITUD DE LA CADENA
}

void Letrero::DibujarBordes(int a,int b) const {//FUNCION PARA DIBUJAR MARCO DE LETRERO
    int i;
    for(i=1;i<79;i++){//BARRAS DOBLES HORIZONTALES ═ (PARTE SUPERIOR)
        Gotoxy(i,a);printf("%c",205);
    }
    for(i=1;i<79;i++){
        Gotoxy(i,b);printf("%c",205);//BARRAS DOBLES HORIZONTALES ═(PARTE INFERIOR)
    }

    for(i=(a+1);i<b;i++){//BARRAS DOBLES VERTICALES ║ (IZQUIERDA Y DERECHA)
        Gotoxy(0,i);printf("%c",186);
        Gotoxy(79,i);printf("%c",186);
    }

    Gotoxy(0,a);printf("%c",201);//╔ ESQUINA SUPERIOR IZQUIERDA
    Gotoxy(79,a);printf("%c",187);//╗//ESQUINA SUPERIOR DERECHA
    Gotoxy(0,b);printf("%c",200);//╚ ESQUINA INFERIOR IZQUIERDA
    Gotoxy(79,b);printf("%c",188);//╝ //ESQUINA INFERIOR DERECHA
}

void Letrero::Ejecutar(){//PONE EN MARCHA EL LETRERO
    int i;
    int contLetras = 1;
    int letraInit = 0;
    int contEspacios = 10;
    //Cargar letra i
    i = 0;
    while(i < Texto.longitud){//INICIALIZA EL ARREGLO DE LETRAS
        letra[i].c = Texto.cadena[i];//GUARDA CARACTER A CARACTER
        letra[i].SeleccionarLetra();//SELECCIONA LA FUNCIÓN QUE DIBUJARÁ EL CARACTER
        letra[i].SetPosicion(69,4);//INICIALIZA LA POSICIÓN DE LA LETRA
        i++;//AVANZA AL SIGUIENTE CARACTER
    }

    int controlador = 0;//VALOR DE INICIALIZACIÓN CUALQUIERA

    while(1){
        if(kbhit()){//SI SE PULSA UNA TECLA
            controlador = getch();//SE GUARDA EL VALOR DE LA TECLA
            if(controlador==27){//SI LA TECLA TIENE VALOR 27 (CORRESPONDE A TECLA ESCAPE)
                system("cls");//LIMPIAR LA PANTALLA
                exit(0);//SALIR DEL PROGRAMA
            }
        }
        //letraInit CONTIENE EL INDICE DEL ARREGLO DE LETRAS DESDE EL CUAL INICIARÁ A MOSTRARSE LA CADENA
        i = letraInit;
        while(i<contLetras){//CICLO PARA MOSTRAR LAS LETRAS
            if((letra[i].x + contEspacios)<80){
                letra[i].Borrar(letra[i].x,letra[i].y);//BORRA LETRA DE SU POSICIÓN ANTERIOR
                letra[i].Mover();//ACTUALIZA POSICIÓN DE LETRA
                letra[i].Draw(letra[i].x,letra[i].y);//DIBUJA LETRA EN SU NUEVA POSICIÓN
                i++;//AVANZA A LA SIGUIENTE LETRA DEL ARREGLO
            }

        }
        contEspacios--;//SIRVE PARA SABER CUANDO AGREGAR MAS LETRAS A MOSTRAR
        if(contEspacios <= 0){//CUANDO EL CONTADOR DE ESPACIOS LLEGA A 0, ES HORA DE MOSTRAR OTRA LETRA
                contEspacios = 10;//REINICIAR CONTEO (10 ES EL AÑO DE LETRA)
            if(contLetras<Texto.longitud){//SI EL CONTADOR DE LETRAS AUN ES MENOR QUE LA LONGITUD DE LA CADENA
                contLetras++;//SEGUIR CONTANDO LAS LETRAS
            }
        }

        if(letra[letraInit].x <= 2){//SI LA POSICIÓN DE LA PRIMERA LETRA MOSTRADA ES MENOR O IGUAL QUE 2 (X = 2)
            if(letraInit<(Texto.longitud - 1)){//SI LA ACTUAL LETRA INICIAL NO ES LA ULTIMA DE LA CADENA
                letra[letraInit].Borrar(letra[letraInit].x,letra[letraInit].y);//BORRAR LETRA INICIAL
                letraInit++;//ACTUALIZAR LETRA INICIAL
            }else{//SE HA LLEGADO AL FINAL DEL TEXTO, HABRÁ QUE INICIALIZAR TODO.
                letra[letraInit].Borrar(letra[letraInit].x,letra[letraInit].y);
                letraInit = 0;
                contLetras = 1;
                contEspacios = 10;
                int k = 0;
                while(k < Texto.longitud){//REINICIAR LA POSICIÓN DE TODAS LAS LETRAS
                    letra[k].SetPosicion(69,4);
                    k++;
                }
            }
        }
        Sleep(80);//REALIZA UNA PAUSA DE 80 MILISEGUNDOS, ASÍ EL TEXTO SE DESPLAZA MAS LENTO
    }
}

//LIMPIA LA SECCIÓN DE LA PANTALLA COMPRENDIDA ENTRE A Y B (VALORES VERTICALES DE CONSOLA)
void Letrero::LimpiarPantalla(int a,int b)const{
    int i,j;
    for(i=a;i<=b;i++){//CONTROLA UBICACIÓN VERTICAL (A - B)
        for(j=0;j<80;j++){//CONTROLA UBICACIÓN HORIZONTAL (0 A 79)
            Gotoxy(j,i);cout<<" ";
        }
    }
}
