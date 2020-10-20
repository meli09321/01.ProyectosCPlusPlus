#include <iostream>

using namespace std;int cambioJugador ( int jugador){
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
 void coordenasBarco(int jugador, char tablero[10][10][2]){
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
                 tablero[fila][columna][jugador]= 64+x ;
                if(sentido == 'h'){
                   columna=columna+1;
                }else{
                    fila=fila+1;
                }
        }}}
 void mostrarBarcosJugador( char tablero[10][10][2],int jugador){
    for(int x=0;x<=9;x++){
        for(int y=0;y<=9;y++){
            cout << "|" << tablero[x][y][jugador] ;
        }
    cout<<endl;
   }
 }
 void disparo(char tablero[10][10][2],int fila,int columna,int capturas[2] ,int jugador){
     jugador=cambioJugador(jugador);
      if ( tablero[fila][columna][jugador]!= ' '){
                cout << "HUNDIDO"<<endl;
                tablero[fila][columna] [jugador]='B';
                 jugador=cambioJugador(jugador);
                capturas[jugador]=capturas[jugador]+1;
            } else{
                cout << "AGUA"<<endl;
                tablero[fila][columna] [jugador]='X';
            }}
void tableroSinBarcos(char tablero[10][10][2],int jugador){
     jugador=cambioJugador(jugador);
     for(int x=0;x<=9;x++){
        for(int y=0;y<=9;y++){
            cout << "|" ;
            if (tablero[x][y][jugador] == 'B'||tablero[x][y][jugador] == 'x'||tablero[x][y][jugador] == ' '){
                cout<< tablero[x][y][jugador] ;
            }else{
                cout <<' ';
            }
        }
    cout<<endl;
   }
}

int main()
{
     char tablero[10][10][2];
     int fila,columna, disparos[2], capturas[2],int jugador = 1;

    for(int x=0;x<=9;x++){
        for(int y=0;y<=9;y++){
            tablero[x][y][0]=' ';
            tablero[x][y][1]=' ';
        }
    }

    for(int x=0;x<=1;x++){
    coordenasBarco(x, tablero);
    mostrarBarcosJugador(tablero,x);
    disparos[x] = 0;
    capturas[x] = 0;
    }
    do{
        jugador=cambioJugador(jugador);
        cout <<"JUGADOR: " << jugador <<endl;
        cout << "DISPARO EN: " << endl;
        cout << "FILA: " <<endl ;
        cin  >>  fila;
        cout << "COLUMNA: " <<endl;
        cin  >>  columna;
        disparo( tablero, fila,columna,capturas ,jugador);
        tableroSinBarcos(tablero,jugador);
        disparos[jugador]=disparos[jugador]+1;
        cout << disparos[jugador] <<endl ;
        cout << capturas[jugador] << "/ 10 " << endl ;
    }while(disparos[jugador]<=10 || capturas[jugador]<= 10);

    return 0;
    }
