#include <iostream>
#include <windows.h>
#include <conio.h>


using namespace std;
void Gotoxy(int x, int y){
HANDLE hcon;
hcon=GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwPos;
dwPos.X=x;
dwPos.Y=y;
SetConsoleCursorPosition(hcon,dwPos);
}
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

int main()
{
   // system("mode con: cols=50 lines=20");
   // system ("color 7A");
 //  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | BACKGROUND_BLUE);
 //SetConsoleTextAttribute(GetStdHandle());
/* int x=0, y=0;

B(x,y);
x=x+10;
A(x,y);
x=x+10;
T(x,y);
 x=x+10;
A(x,y);
x=x+10;
L(x,y);
x=x+10;
A(x,y);
x=x+10;
 y=20;
N(x,y);
x=x+10;
A(x,y);
x=x+10;
V(x,y);
x=x+10;
A(x,y);
x=x+10;
L(x,y);
x=x+10;*/
 HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 for(int color = 1; color < 255; color++)
  {
    SetConsoleTextAttribute(hConsole, color);
   cout << color<<"texto prueba" << endl;
  }
    wcout << L"Hello, \u0444!\n";
     wcout << "\u25A0!"<< endl;
    system("pause");
    return 0;
}
