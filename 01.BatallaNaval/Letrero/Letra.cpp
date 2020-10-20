#include <iostream>
using std::cout;
using std::endl;

#include <windows.h>
#include <cstdio>

#include "Letra.h"

Letra::Letra(){//CONSTRUCTOR
    c = 0;//INICIALIZA LETRA
    x = 0;//INICIALIZA POSICIÓN HORIZONTAL
    y = 0;//INICIALIZA POSICIÓN VERTICAL
    Borrar = BorrarLetra;//HACE QUE LA FUNCIÓN BORRAR APUNTE A LA FUNCIÓN BORRAR LETRA
    Draw = NULL;//INICIALIZA A NULL LA FUNCIÓN ENCARGADA DE DIBUJAR LA LETRA
}

Letra::~Letra(){//DESTRUCTOR, INICIALIZA LOS VALORES DE LETRA Y POSICIÓN (NO ES NECESARIO)
    c = 0;
    x = y = 0;
}

void Letra::SetPosicion(int a, int b){//SETTER, ACTUALIZA LA POSICIÓN DE LA LETRA
    x = a;//ACTUALIZA POSICIÓN HORIZONTAL
    y = b;//ACTUALIZA POSICIÓN VERTICAL
}

void Letra::Mover(){//DISMINUYE LA POSICIÓN HORIZONTAL (LAS LETRAS SE DESPLAZAN DE DERECHA A IZQUIERDA)
    x--;
}

void Letra::SeleccionarLetra(){//HACE QUE DRAW APUNTE A LA FUNCIÓN QUE DIBUJARÁ LA LETRA, SEGUN CORRESPONDA.
    switch(c){
        case 'A':{
            Draw = A;
            break;
        }
        case 'B':{
            Draw = B;
            break;
        }
        case 'C':{
            Draw = C;
            break;
        }
        case 'D':{
            Draw = D;
            break;
        }
        case 'E':{
            Draw = E;
            break;
        }
        case 'F':{
            Draw = F;
            break;
        }
        case 'G':{
            Draw = G;
            break;
        }
        case 'H':{
            Draw = H;
            break;
        }
        case 'I':{
            Draw = I;
            break;
        }
        case 'J':{
            Draw = J;
            break;
        }
        case 'K':{
            Draw = K;
            break;
        }
        case 'L':{
            Draw = L;
            break;
        }
        case 'M':{
            Draw = M;
            break;
        }
        case 'N':{
            Draw = N;
            break;
        }
        case 'O':{
            Draw = O;
            break;
        }
        case 'P':{
            Draw = P;
            break;
        }
        case 'Q':{
            Draw = Q;
            break;
        }
        case 'R':{
            Draw = R;
            break;
        }
        case 'S':{
            Draw = S;
            break;
        }
        case 'T':{
            Draw = T;
            break;
        }
        case 'U':{
            Draw = U;
            break;
        }
        case 'V':{
            Draw = V;
            break;
        }
        case 'W':{
            Draw = W;
            break;
        }
        case 'X':{
            Draw = X;
            break;
        }
        case 'Y':{
            Draw = Y;
            break;
        }
        case 'Z':{
            Draw = Z;
            break;
        }
        case ' ':{//ESCACIO O CARACTER VACIO
            Draw = _Espace;
            break;
        }
        case 181: //A CON TILDE
        case 160:{
            Draw = A_tilde;
            break;
        }
        case 130://E CON TILDE
        case 144:{
            Draw = E_tilde;
            break;
        }
        case 161://I CON TILDE
        case 214:{
            Draw = I_tilde;
            break;
        }
        case 162://O CON TILDE
        case 224:{
            Draw = O_tilde;
            break;
        }
        case 163://U CON TILDE
        case 233:{
            Draw = U_tilde;
            break;
        }
        case 164://CASO ñ
        case 165:{//CASO Ñ
            Draw = enie;
            break;
        }
        case 39:{//SI ES COMILLA SIMPLE
            Draw = _ComillaSimple;
            break;
        }
        case '0':{
            Draw = Cero;
            break;
        }
        case '1':{
            Draw = Uno;
            break;
        }
        case '2':{
            Draw = Dos;
            break;
        }
        case '3':{
            Draw = Tres;
            break;
        }
        case '4':{
            Draw = Cuatro;
            break;
        }
        case '5':{
            Draw = Cinco;
            break;
        }
        case '6':{
            Draw = Seis;
            break;
        }
        case '7':{
            Draw = Siete;
            break;
        }
        case '8':{
            Draw = Ocho;
            break;
        }
        case '9':{
            Draw = Nueve;
            break;
        }
        case ',':{//CASO COMA
            Draw = Coma;
            break;
        }
        case 63:{ //CASO ?
            Draw = Interrogacion_cierra;
            break;
        }
        case 168:{//CASO ¿
            Draw = Interrogacion_abre;
            break;
        }
        case 173:{//CASO ¡
            Draw = Admiracion_abre;
            break;
        }
        case 33:{//CASO !
            Draw = Admiracion_cierra;
            break;
        }
        case '.':{
            Draw = Punto;
            break;
        }
        case 43:{//CASO +
            Draw = Signo_mas;
            break;
        }
        case 45:{//CASO -
            Draw = Guion;
            break;
        }
        default:{
            cout<<"Caracter desconocido : "<<c<<endl;
            exit(EXIT_FAILURE);
        }
    }
}

void Gotoxy(int x, int y){
    HANDLE hwnd;
    hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(hwnd,coord);
}

/*FUNCIONES PARA DIBUJAR LETRAS Y SIMBOLOS*/

void BorrarLetra(int x, int y){
    Gotoxy(x,y);cout<< "          ";y++;
    Gotoxy(x,y);cout<< "          ";y++;
    Gotoxy(x,y);cout<< "          ";y++;
    Gotoxy(x,y);cout<< "          ";y++;
    Gotoxy(x,y);cout<< "          ";y++;
    Gotoxy(x,y);cout<< "          ";y++;
    Gotoxy(x,y);cout<< "          ";y++;
    Gotoxy(x,y);cout<< "          ";y++;
    Gotoxy(x,y);cout<< "          ";y++;
    Gotoxy(x,y);cout<< "          ";y++;
    Gotoxy(x,y);cout<< "          ";y++;
    Gotoxy(x,y);cout<< "          ";y++;
    Gotoxy(x,y);cout<< "          ";y++;
    Gotoxy(x,y);cout<< "          ";y++;
}

void A(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "  *****  ";y++;
    Gotoxy(x,y);cout<< " ******* ";y++;
    Gotoxy(x,y);cout<< "**** ****";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
}

void B(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "******** ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "******** ";y++;
    Gotoxy(x,y);cout<< "******** ";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "******** ";y++;
}

void C(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
}

void D(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "*******  ";y++;
    Gotoxy(x,y);cout<< "******** ";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "******** ";y++;
    Gotoxy(x,y);cout<< "*******  ";y++;
}

void E(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
}

void F(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
}

void G(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
    Gotoxy(x,y);cout<< "***  ****";y++;
    Gotoxy(x,y);cout<< "***  ****";y++;
    Gotoxy(x,y);cout<< "***    **";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
}

void H(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
}

void I(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
}

void J(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "******   ";y++;
    Gotoxy(x,y);cout<< "******   ";y++;
}

void K(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***  *** ";y++;
    Gotoxy(x,y);cout<< "*******  ";y++;
    Gotoxy(x,y);cout<< "******   ";y++;
    Gotoxy(x,y);cout<< "*******  ";y++;
    Gotoxy(x,y);cout<< "*** **** ";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***    **";y++;
}

void L(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
}

void M(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "**** ****";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*** * ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
}

void N(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "****  ***";y++;
    Gotoxy(x,y);cout<< "***** ***";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*** *****";y++;
    Gotoxy(x,y);cout<< "***  ****";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
}

void O(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< " ******* ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< " ******* ";y++;
}

void P(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "******** ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*******  ";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
}

void Q(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< " ******  ";y++;
    Gotoxy(x,y);cout<< "******** ";y++;
    Gotoxy(x,y);cout<< "******** ";y++;
    Gotoxy(x,y);cout<< "***   ** ";y++;
    Gotoxy(x,y);cout<< "***   ** ";y++;
    Gotoxy(x,y);cout<< "*** **** ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< " **** ***";y++;
}

void R(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "******** ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*******  ";y++;
    Gotoxy(x,y);cout<< "***  *** ";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
}

void S(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "   ******";y++;
    Gotoxy(x,y);cout<< " ********";y++;
    Gotoxy(x,y);cout<< "****     ";y++;
    Gotoxy(x,y);cout<< "*******  ";y++;
    Gotoxy(x,y);cout<< "   ***** ";y++;
    Gotoxy(x,y);cout<< "     ****";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*******  ";y++;
}

void T(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
}

void U(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
}

void V(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "**** ****";y++;
    Gotoxy(x,y);cout<< " ******* ";y++;
    Gotoxy(x,y);cout<< "  *****  ";y++;
}

void W(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "*** * ***";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "**** ****";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
}

void X(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "**** ****";y++;
    Gotoxy(x,y);cout<< " ******* ";y++;
    Gotoxy(x,y);cout<< "  *****  ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "**** ****";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
}

void Y(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "**** ****";y++;
    Gotoxy(x,y);cout<< " ******* ";y++;
    Gotoxy(x,y);cout<< "  *****  ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
}

void Z(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "     *** ";y++;
    Gotoxy(x,y);cout<< "    ***  ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< " ***     ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
}

void A_tilde(int x, int y){
    Gotoxy(x,y);cout<< "      ***";y++;
    Gotoxy(x,y);cout<< "     *** ";y++;
    Gotoxy(x,y);cout<< "    ***  ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "  *****  ";y++;
    Gotoxy(x,y);cout<< " ******* ";y++;
    Gotoxy(x,y);cout<< "**** ****";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
}

void E_tilde(int x, int y){
    Gotoxy(x,y);cout<< "    ***  ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "  ***    ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
}

void I_tilde(int x, int y){
    Gotoxy(x,y);cout<< "     *** ";y++;
    Gotoxy(x,y);cout<< "    ***  ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
}

void O_tilde(int x, int y){
    Gotoxy(x,y);cout<< "     *** ";y++;
    Gotoxy(x,y);cout<< "    ***  ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< " ******* ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< " ******* ";y++;
}

void U_tilde(int x, int y){
    Gotoxy(x,y);cout<< "     *** ";y++;
    Gotoxy(x,y);cout<< "    ***  ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
}

void enie(int x, int y){
    Gotoxy(x,y);cout<< " *****  *";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*   **** ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "****  ***";y++;
    Gotoxy(x,y);cout<< "***** ***";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*** *****";y++;
    Gotoxy(x,y);cout<< "***  ****";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
}

void _Espace(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
}

void _ComillaSimple(int x,int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
}

void Cero(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "  *****  ";y++;
    Gotoxy(x,y);cout<< " *** *** ";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< " *** *** ";y++;
    Gotoxy(x,y);cout<< "  *****  ";y++;
}

void Uno(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "  *****  ";y++;
    Gotoxy(x,y);cout<< " ******  ";y++;
    Gotoxy(x,y);cout<< "*** ***  ";y++;
    Gotoxy(x,y);cout<< "    ***  ";y++;
    Gotoxy(x,y);cout<< "    ***  ";y++;
    Gotoxy(x,y);cout<< "    ***  ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
}

void Dos(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "  *****  ";y++;
    Gotoxy(x,y);cout<< " ******* ";y++;
    Gotoxy(x,y);cout<< "****  ***";y++;
    Gotoxy(x,y);cout<< "     ****";y++;
    Gotoxy(x,y);cout<< "   ****  ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
}

void Tres(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "  *****  ";y++;
    Gotoxy(x,y);cout<< " *** *** ";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "    **** ";y++;
    Gotoxy(x,y);cout<< "    **** ";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< " *** *** ";y++;
    Gotoxy(x,y);cout<< "  *****  ";y++;
}

void Cuatro(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "   ***** ";y++;
    Gotoxy(x,y);cout<< "  ****** ";y++;
    Gotoxy(x,y);cout<< " *** *** ";y++;
    Gotoxy(x,y);cout<< "***  *** ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "     *** ";y++;
    Gotoxy(x,y);cout<< "     *** ";y++;
}

void Cinco(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "***      ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "      ***";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
}

void Seis(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< " ****    ";y++;
    Gotoxy(x,y);cout<< "****     ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "**** ****";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "**** ****";y++;
    Gotoxy(x,y);cout<< " ******* ";y++;
}

void Siete(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "     ****";y++;
    Gotoxy(x,y);cout<< "    **** ";y++;
    Gotoxy(x,y);cout<< "   ****  ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< " ****    ";y++;
    Gotoxy(x,y);cout<< "****     ";y++;
}

void Ocho(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< " ******* ";y++;
    Gotoxy(x,y);cout<< "**** ****";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< " *** *** ";y++;
    Gotoxy(x,y);cout<< " ******* ";y++;
    Gotoxy(x,y);cout<< "***   ***";y++;
    Gotoxy(x,y);cout<< "**** ****";y++;
    Gotoxy(x,y);cout<< " ******* ";y++;
}

void Nueve(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< " ********";y++;
    Gotoxy(x,y);cout<< "***  ****";y++;
    Gotoxy(x,y);cout<< "**   ****";y++;
    Gotoxy(x,y);cout<< "******** ";y++;
    Gotoxy(x,y);cout<< "  *****  ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< " ****    ";y++;
    Gotoxy(x,y);cout<< "****     ";y++;
}

void Coma(int x,int y){
    Gotoxy(x,y);cout<< "       ";y++;
    Gotoxy(x,y);cout<< "       ";y++;
    Gotoxy(x,y);cout<< "       ";y++;
    Gotoxy(x,y);cout<< "       ";y++;
    Gotoxy(x,y);cout<< "       ";y++;
    Gotoxy(x,y);cout<< "       ";y++;
    Gotoxy(x,y);cout<< "       ";y++;
    Gotoxy(x,y);cout<< "       ";y++;
    Gotoxy(x,y);cout<< "       ";y++;
    Gotoxy(x,y);cout<< "       ";y++;
    Gotoxy(x,y);cout<< " ***** ";y++;
    Gotoxy(x,y);cout<< " ***** ";y++;
    Gotoxy(x,y);cout<< "   **  ";y++;
    Gotoxy(x,y);cout<< "   *   ";y++;
}

void Punto(int x,int y){
    Gotoxy(x,y);cout<< "       ";y++;
    Gotoxy(x,y);cout<< "       ";y++;
    Gotoxy(x,y);cout<< "       ";y++;
    Gotoxy(x,y);cout<< "       ";y++;
    Gotoxy(x,y);cout<< "       ";y++;
    Gotoxy(x,y);cout<< "       ";y++;
    Gotoxy(x,y);cout<< "       ";y++;
    Gotoxy(x,y);cout<< "       ";y++;
    Gotoxy(x,y);cout<< "       ";y++;
    Gotoxy(x,y);cout<< "       ";y++;
    Gotoxy(x,y);cout<< "  ***  ";y++;
    Gotoxy(x,y);cout<< "  ***  ";y++;
}

void Interrogacion_cierra(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< " ******* ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "**   ****";y++;
    Gotoxy(x,y);cout<< "     ****";y++;
    Gotoxy(x,y);cout<< "   ***** ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
}

void Interrogacion_abre(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< " ****    ";y++;
    Gotoxy(x,y);cout<< "***    **";y++;
    Gotoxy(x,y);cout<< "***    **";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< " ******* ";y++;
}

void Admiracion_cierra(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
}

void Admiracion_abre(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
    Gotoxy(x,y);cout<< "  ****   ";y++;
}

void Signo_mas(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
    Gotoxy(x,y);cout<< "   ***   ";y++;
}

void Guion(int x, int y){
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "*********";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
    Gotoxy(x,y);cout<< "         ";y++;
}
