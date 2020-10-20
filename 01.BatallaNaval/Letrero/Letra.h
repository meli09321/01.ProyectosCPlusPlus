#ifndef LETRA_H
#define LETRA_H

class Letra{
friend class Letrero;//CLASE LETRERO ES AMICA DE CLASE LETRA, YA QUE NECESITA ACCEDER A LA POSICIÓN DE LA LETRA
public:
    Letra();//CONSTRUCTOR
    ~Letra();//DESTRUCTOR
    void SetPosicion(int,int);//SETTER, ACTUALIZA POSICIÓN
    void Mover();//DESPLAZA LA LETRA HORIZONTALMENTE (NO ES NECESARIO VERTICALMENTE)
    void (*Borrar)(int,int);//APUNTADOR A FUNCIÓN, APUNTARÁ A LA FUNCIÓN QUE BORRA LETRAS
    void (*Draw)(int,int);//APUNTADOR A FUNCIÓN, APUNTARÁ A LA FUNCIÓN QUE DIBUJA UNA LETRA, SIMBOLO, ETC. SEGUN VALOR DE C
private:
    void SeleccionarLetra();
    unsigned char c;//ALMACENA LETRA O CARACTER
    short x,y;//POSICIÓN DE LA LETRA C
};

//void SeleccionarLetra(Letra*);
void Gotoxy(int x, int y);
void _Espace(int x, int y);
void _ComillaSimple(int x,int y);
void BorrarLetra(int,int);
void A(int,int);
void B(int,int);
void C(int,int);
void D(int,int);
void E(int,int);
void F(int,int);
void G(int,int);
void H(int,int);
void I(int,int);
void J(int,int);
void K(int,int);
void L(int,int);
void M(int,int);
void N(int,int);
void O(int,int);
void P(int,int);
void Q(int,int);
void R(int,int);
void S(int,int);
void T(int,int);
void U(int,int);
void V(int,int);
void W(int,int);
void X(int,int);
void Y(int,int);
void Z(int,int);
void A_tilde(int,int);
void E_tilde(int,int);
void I_tilde(int,int);
void O_tilde(int,int);
void U_tilde(int,int);
void enie(int,int);
void Uno(int,int);
void Dos(int,int);
void Tres(int,int);
void Cuatro(int,int);
void Cinco(int,int);
void Seis(int,int);
void Siete(int,int);
void Ocho(int,int);
void Nueve(int,int);
void Cero(int,int);
void Coma(int,int);
void Punto(int,int);
void Interrogacion_abre(int,int);
void Interrogacion_cierra(int,int);
void Admiracion_abre(int,int);
void Admiracion_cierra(int,int);
void Signo_mas(int,int);
void Guion(int,int);
#endif // LETRA_H
