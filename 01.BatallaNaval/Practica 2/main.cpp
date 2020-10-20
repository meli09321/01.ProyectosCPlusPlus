#include <iostream>
#include <windows.h>

using namespace std;
void Z(int x, int y){
HANDLE hcon;
hcon=GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwPos;
dwPos.X=x;
dwPos.Y=y;
SetConsoleCursorPosition(hcon,dwPos);
}
void horizontales(int hInicio,int hFinal,int vInicio, int vFinal ){


         char carac;
         carac=205;
          for(int x = hInicio; x <=hFinal ; x++){
           Z(x,0);
            cout << carac;
            Z(x,vFinal);
            cout << carac;
            }
}
void verticales( int hInicio,int hFinal,int vInicio, int vFinal){
 char carac;
         carac=186;
    for(int x = vInicio; x <=vFinal ; x++){
           Z(hInicio,x);
           cout<<carac;
           Z(hFinal,x);
           cout<<carac;}

           carac=187;
           Z(hFinal,vInicio);
           cout<<carac;
           carac=201;
           Z(hInicio,vInicio);
           cout<<carac;
           carac=200;
           Z(hInicio,vFinal);
           cout<<carac;
           carac=188;
           Z(hFinal,vFinal);
           cout<<carac;

           }




struct participantes{
        char tablero[10][10];
        int disparos;
        int capturas;
    };
int cambioJugador ( int jugador){
    if (jugador == 0 ){
        jugador = 1 ;
    }else {
        jugador=0;
    }
    return jugador;}
int casilleroInicial( char sentido, char fOc, int largo){
       int valor;
        if ((sentido == 'h'&& fOc=='c' )|| (sentido == 'v' && fOc=='f' )  ){
            do{
                cin >> valor;
            }while(valor<0 || valor+largo-1>9);
        }else{
            do{
                cin >> valor;
            }while(valor<0 || valor>9);
        }
        return valor;
 }
void coordenasBarco(int jugadorAct, struct participantes jugador[2]){
     int columna,fila;
     char sentido;
  for(int x=1;x<=4;x++){
        cout<< "LARGO DEL BARCO: " << x << endl;
        cout << "SENTIDO (H o V): " << endl;
            do{
                cin >> sentido;
            }while( sentido!='h' && sentido !='v');
        cout << "COLUMNA INICIAL: " << endl;
        columna = casilleroInicial(sentido,'c',x);
        cout<< "FILA INICIAL: "<<endl;
        fila = casilleroInicial(sentido,'f',x);
        for(int y=1;y<=x;y++){
                jugador[jugadorAct].tablero[fila][columna]= 64+x ;
                if(sentido == 'h'){
                   columna=columna+1;
                }else{
                    fila=fila+1;

        }}}        }
void mostrarBarcosJugador(  struct participantes  jugador[2],int jugadorAct){
    for(int x=0;x<=9;x++){
        for(int y=0;y<=9;y++){
            cout << "|" << jugador[jugadorAct].tablero[x][y] ;
        }
    cout<<endl;
   }
 }
void disparo(struct participantes  jugador[2],int fila,int columna ,int jugadorAct){
     jugadorAct=cambioJugador(jugadorAct);
      if ( jugador[jugadorAct].tablero[fila][columna]!= ' '){
            cout << "HUNDIDO"<<endl;
            jugador[jugadorAct].tablero[fila][columna]='x';
            jugadorAct=cambioJugador(jugadorAct);
            jugador[jugadorAct].capturas=jugador[jugadorAct].capturas+1;
            }else{
            cout << "AGUA"<<endl;
            jugador[jugadorAct].tablero[fila][columna]='0';
            }}
void tableroSinBarcos(struct participantes  jugador[2],int jugadorAct){
     jugadorAct=cambioJugador(jugadorAct);
     for(int x=0;x<=9;x++){
        for(int y=0;y<=9;y++){
            cout << "|" ;
            if (jugador[jugadorAct].tablero[x][y] == '0'||jugador[jugadorAct].tablero[x][y]  == 'x'||jugador[jugadorAct].tablero[x][y]  == ' '){
                cout<< jugador[jugadorAct].tablero[x][y]  ;
            }else{
                cout <<' ';
            }
        }
    cout<<endl;
   }
}

int main(){
    for(int x = 0; x <=254 ; x++){
           Z(0,x);
           char e=x;
           cout<<" "<< e <<"    " <<x <<endl;
         }
  int hFinal=60, hInicio=0,vInicio=0, vFinal=30;
    horizontales(hInicio,hFinal,vInicio,vFinal);
    verticales(hInicio, hFinal, vInicio, vFinal);
    participantes jugador[2];
    for(int x=0;x<=1;x++){
        jugador[x].disparos=0;
        jugador[x].capturas=0;
    }
    int fila,columna,jugadorAct = 1;
    for(int x=0;x<=9;x++){
        for(int y=0;y<=9;y++){
           jugador[0].tablero[x][y]=' ';
           jugador[1].tablero[x][y]=' ';
        }
    }
    for(int x=0;x<=1;x++){
        cout << "JUGADOR: " << x << endl;
        coordenasBarco(x, jugador);
        mostrarBarcosJugador(jugador,x);
        jugador[x].disparos = 0;
        jugador[x].capturas = 0;
    }
    do{
        jugadorAct=cambioJugador(jugadorAct);
        cout <<"JUGADOR: " << jugadorAct <<endl;
        cout << "DISPARO EN: " << endl;
        cout << "FILA: " <<endl ;
        cin  >>  fila;
        cout << "COLUMNA: " <<endl;
        cin  >>  columna;
        disparo( jugador, fila,columna ,jugadorAct);
        tableroSinBarcos(jugador,jugadorAct);
        jugador[jugadorAct].disparos=jugador[jugadorAct].disparos+1;
        cout << jugador[jugadorAct].disparos <<endl ;
        cout << jugador[jugadorAct].capturas << "/ 10 " << endl ;
    }while(jugador[jugadorAct].disparos<=10 || jugador[jugadorAct].capturas <= 10);
    return 0;

}
