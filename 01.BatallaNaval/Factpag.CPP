/*tengo qe crear un sistema de venta de carniceria, en el cual el
cliente puede pagar en egectivo, Tarj de credito o de debito
la tarjeta de credito: 3 y 6 pagos.
la tarjeta de debito se cobra sin interes
efectivo descuento(25%)
minimo 6 productos...
tengo qe escribir el cofdigo y me tiene qe aparecer :
codigo producto precio cantidad precio total
003 paleta 25$ 2kg 50$
y asi con los otros 6 productos.......... por fa es la nota final y me mareo mucho*/


//#include <dos.h>      // guardar y operar con los datos ds una factura.
#include <string.h>    //Los datos  que tenemos son:Cantidad ds productos;
#include <iostream>  //codigo del articulo y si compra
#include <stdio.h>     // +d una docena dto20% o+d dos docenas dto 30%
//#include <conio.h>
#include <stdlib.h>
const int item=6;

void mostrar();
int i, codigo;
float Total=0, Dcto=0, STot=0, desc;
float tabla[item][3];
char detalle[item][21], Nombre[21], cat;

main()
{
system("MODE CON: Lines=50");//para mas de 5 articulos
system("CLS");
for(i=0;i<item;i++){
cout<<"INGRESE LA CANTIDAD DEL ARTICULO VENDIDO: ==> ";
cin>>tabla[i][0];
if(tabla[i][0]==0) break;//fin de carga
//cout<<"INGRESE EL PRECIO X UNIDAD DEL ARTICULO: ==> "; //habilitar para precio y no codigo
cout<<"Ingrese Codigo Articulo\n01 Lomo \n02 Asado\n03 Cuadril\n04 Falda\05 Picada Esp.\n06 Picada Comun \n07 Achuras\n";
do{
cin>>codigo;
tabla[i][2]=codigo;
fflush(stdin);
switch(codigo){
case 01: tabla[i][1]=0; break;
case 02: tabla[i][1]=30; break;
case 03: tabla[i][1]=27; break;
case 04: tabla[i][1]=24; break;
case 05: tabla[i][1]=22; break;
case 06: tabla[i][1]=20; break;
case 07: tabla[i][1]=15; break;
default: cout<<"No corresponde a ningun codigo valido"; getchar(); break;
}}while(codigo >8 );
//cin>>tabla[i][1]; //habilitar para pedir precio y no codigo
if(tabla[i][0]==0) break;//fin de carga
cout<<"INGRESE DETALLE DEL ARTICULO VENDIDO: ==> ";
fflush(stdin);
gets(detalle[i]);
fflush(stdin);
}//for carga
fflush(stdin);
cout<<"INGRESE Nombre Cliente "; gets(Nombre);
cout<<"\n";
cout<<"INGRESE Forma Pago\n(1)=Tarjeta Credito 1 pago;\n(2)=Tarjeta Credito 3 pagos;\n(3)=Tarjeta Credito 6 pagos; \n(4)=Tarjeta Debito;\n(5)Efectivo \n(Categoria En Numero) ==> ";
cin>>cat;
fflush(stdin);
desc=0;
if(cat=='1')desc=-5; //5% para 1 y 3 pagos, 10% para 6 pagos
if(cat=='2')desc=-5;
if(cat=='3')desc=-10;
if(cat=='5')desc=25;

system("CLS");
mostrar();
system("PAUSE");
return 0;
} //####   --------------------- Fin del main -----------------

void mostrar ()
{

 printf("      **** ESTA ES LA FACTURA CARGADA POR USTED ****      ");
 printf("\n------------------------------"
	"---------------------------------\n");
 printf("³ CARNICERIA EL LOMITO FELIZ S.R.L. de Anonimato Recursi      ³\n");
 printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´\n");
 printf("³Cliente:%20s/" ,Nombre);
 printf("FdP:%c; ", cat);
 printf("[ %21s] ³\n", "Fact Nø 0003233224");
 printf("ÃÄÄÄÄÂÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÂÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄ´\n");
  cout<<"³Cant³Cod.³   Detalles del    ³Precio³  Sub  ³Rec.";
  if(cat < '5')  printf("%2d%c", int(-desc),'%'); else printf("%2d%c", 0,'%');
  cout<<"³  SUB   ³\n";
  cout<<"³Art.³Art.³   Articulo        ³Unit  ³ Total ³Dto.";
  if(cat == '5')  printf("%2d%c", int(desc),'%'); else printf("%2d%c", 0,'%');
  cout<<"³ TOTAL  ³\n";
  cout<<"ÃÍÍÍÍÅÍÍÍÍÅÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÅÍÍÍÍÍÍÅÍÍÍÍÍÍÍÅÍÍÍÍÍÍÍÅÍÍÍÍÍÍÍÍ´\n";
for(i=0; i<item; i++){
if(tabla[i][0]!=0){
printf("³%4.0f³",tabla[i][0]);
printf("  %02.0f³",tabla[i][2]);
printf("%19s³",detalle[i]);
printf("%6.2f³",tabla[i][1]);
STot=tabla[i][0]*tabla[i][1];
printf("%7.2f³",STot);
Dcto=(STot *desc)/100;
if(cat < '5')printf("%7.2f³",-Dcto); else printf("%7.2f³",Dcto);
printf("%8.2f³\n",STot-Dcto);

Total= Total + (STot - Dcto);
}
else
{
  cout<<"³----³----³-------------------³------³-------³-------³--------³\n";
}

  cout<<"ÃÄÄÄÄÅÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÅÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄ´\n";
}//del for

  cout<<"ÃÄÄÄÄÁÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÁÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄ´\n";
 printf("³ *** EL TOTAL DE LAS OPERACIONES ES: ÍÍÍÍÍÍ>    %13.2f³\n", Total);

  cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n\n";
} //fin del void mostrar
