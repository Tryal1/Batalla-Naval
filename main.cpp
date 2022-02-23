#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include<time.h>

using namespace std;
#include "Function.h"

int main(){
    const int NFilas = 10, NCol=10;
    int Submarinos=4, Destructores=3, Cruceros=2, Acorazados=1, islas=0;
    int J1[NFilas][NCol], J2[NFilas][NCol];
    int NroBarcos1, NroBarcos2;
    int GameMode=0;
    int Ronda=0, Jugador1=1, Jugador2=2, PuntosJugagor1=0, PuntosJugagor2=0, ganador1=0, ganador2=0;
    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    ///Menu
while(GameMode!=5){
        system("cls");
        cout<<(char)201;
        for(int i=1; i<=43; i++)cout<<(char)205;
        cout<<(char)187;
        cout<<endl;
        cout<<(char)186;
        cout<<"1. ";Color(6);cout<<"Juego";Color(15);cout<<" nuevo                             ";cout<<(char)186<<endl;
        cout<<(char)186;
        cout<<"2. Jugador contra ";Color(4);cout<<"IA";Color(15);cout<<"                       "; cout<<(char)186<<endl;
        cout<<(char)186;
        cout<<"3. ";Color(10);cout<<"opciones";Color(15);cout<<"                                ";cout<<(char)186<<endl;
        cout<<(char)186;
        cout<<"4. Mostrar la ";Color(3);cout<<"puntuacion";Color(15);cout<<" de cada jugador   ";cout<<(char)186<<endl;
        cout<<(char)186;
        cout<<"5. ";Color(13);cout<<"Reglas";Color(15);cout<<"                                  ";cout<<(char)186<<endl;
        cout<<(char)186;
        cout<<"6. ";Color(12);cout<<"Fin";Color(15);cout<<" del juego                           ";cout<<(char)186<<endl;
        cout<<(char)200;
        for(int i=1; i<=43; i++)cout<<(char)205;
        cout<<(char)188;
        cout<<endl;
        cin>>GameMode;
        system("cls");
 ///seleccion
switch(GameMode){
case 1:
    LlenarMatriz0(J1,NFilas,NCol);
    Islas( J1, islas);
    CopiarMatriz(J1,J2);
    cout<<"Jugador Numero 1 Colque sus barcos"<<endl;
    getch();
    BarcosTam4(J1,NFilas,NCol, Acorazados);
    BarcosTam3(J1,NFilas,NCol, Cruceros);
    BarcosTam2(J1,NFilas,NCol, Destructores);
    BarcosTam1(J1,NFilas,NCol, Submarinos);
        BarcosFinal(J1);
    cout<<"Jugador Numero 2 Colque sus barcos"<<endl;
    getch();
    BarcosTam4(J2,NFilas,NCol, Acorazados);
    BarcosTam3(J2,NFilas,NCol, Cruceros);
    BarcosTam2(J2,NFilas,NCol, Destructores);
    BarcosTam1(J2,NFilas,NCol, Submarinos);
        BarcosFinal(J2);

    NroBarcos1=ContadorBarcos(J1);
    NroBarcos2=ContadorBarcos(J2);
    while(true){
    Ronda++;
    DiparosJugador(J2,NroBarcos2,Ronda,Jugador1,J2);
    NroBarcos2=ContadorBarcos(J2);
    if(NroBarcos2==0)break;
    DiparosJugador(J1,NroBarcos1,Ronda,Jugador2,J1);
    NroBarcos1=ContadorBarcos(J1);
    if(NroBarcos1==0)break;
    }
    system("cls");
    cout<<"Juego finalizado gano el juegador #";
    if(NroBarcos1==0){
GameOver2();
       PuntosJugagor2++;
       Ronda=0;
    }else if(NroBarcos2==0){
GameOver1();
       PuntosJugagor1++;
       Ronda=0;
    }

    getch();
    break;
case 2:
     LlenarMatriz0(J1,NFilas,NCol);
    Islas( J1, islas);
    CopiarMatriz(J1,J2);
    cout<<"Jugador Numero 1 Colque sus barcos"<<endl;
    getch();
    BarcosTam4(J1,NFilas,NCol, Acorazados);
    BarcosTam3(J1,NFilas,NCol, Cruceros);
    BarcosTam2(J1,NFilas,NCol, Destructores);
    BarcosTam1(J1,NFilas,NCol, Submarinos);
    BarcosFinal(J1);
    ///IA pone sus barcos
    IABarcosTam4(J2,NFilas,NCol, Acorazados);
    IABarcosTam3(J2,NFilas,NCol, Cruceros);
    IABarcosTam2(J2,NFilas,NCol, Destructores);
    IABarcosTam1(J2,NFilas,NCol, Submarinos);

    NroBarcos1=ContadorBarcos(J1);
    NroBarcos2=ContadorBarcos(J2);
    while(true){
    Ronda++;
    DiparosJugador(J2,NroBarcos2,Ronda,Jugador1,J2);
    NroBarcos2=ContadorBarcos(J2);
    if(NroBarcos2==0)break;
   DisparosIA(J1,NroBarcos1,Ronda,Jugador2,J1);
    NroBarcos1=ContadorBarcos(J1);
    if(NroBarcos1==0)break;
    }
    system("cls");
    cout<<"Juego finalizado gano el juegador #";
    if(NroBarcos1==0){
GameOver2();
       PuntosJugagor2++;
       Ronda=0;
    }else if(NroBarcos2==0){
GameOver1();
       PuntosJugagor1++;
       Ronda=0;
    }
    break;
case 3:
    while(GameMode!=6){
        system("cls");
        cout<<(char)201;
        for(int i=1; i<=49; i++)cout<<(char)205;
        cout<<(char)187;
        cout<<endl;
        cout<<(char)186;
        cout<<"1. Cambiar Numero de Acorazados, Actual: ";Color(2);if(Acorazados<=0){Color(4);cout<<"OFF     ";}else{cout<<Acorazados;cout<<"       ";}Color(15);cout<<(char)186<<endl;
        cout<<(char)186;
        cout<<"2. Cambiar Numero de Cruceros, Actual: ";Color(2);if(Cruceros<=0){Color(4);cout<<"OFF       ";}else{cout<<Cruceros;cout<<"         ";}Color(15);cout<<(char)186<<endl;
        cout<<(char)186;
        cout<<"3. Cambiar Numero de Destructores, Actual: ";Color(2);if(Destructores<=0){Color(4);cout<<"OFF   ";}else{cout<<Destructores;cout<<"     ";}Color(15);cout<<(char)186<<endl;
        cout<<(char)186;
        cout<<"4. Cambiar Numero de Submarinos, Actual: ";Color(2);if(Submarinos<=0){Color(4);cout<<"OFF     ";}else{cout<<Submarinos;cout<<"       ";}Color(15);cout<<(char)186<<endl;
        cout<<(char)186;
        cout<<"5. Cambiar Numero de islas, Actual: ";Color(2);if(islas<=0){Color(4);cout<<"OFF          ";}else{cout<<islas;cout<<"            ";}Color(15);cout<<(char)186<<endl;
        cout<<(char)186;
        cout<<"6. Volver                                        ";cout<<(char)186<<endl;
        cout<<(char)200;
        for(int i=1; i<=49; i++)cout<<(char)205;
        cout<<(char)188;
        cout<<endl;
        cin>>GameMode;
        system("cls");
        switch(GameMode){
    case 1:
        cout<<"Ingrese la cantidad de Acorazados que quiera: ";
        cin>>Acorazados;
        break;
    case 2:
        cout<<"Ingrese la cantidad de Cruceros que quiera: ";
        cin>>Cruceros;
        break;
    case 3:
        cout<<"Ingrese la cantidad de Destructores que quiera: ";
        cin>>Destructores;
        break;
    case 4:
         cout<<"Ingrese la cantidad de Submarinos que quiera: ";
        cin>>Submarinos;
        break;
    case 5:
        cout<<"Ingrese la cantidad de islas que quiera: ";
        cin>>islas;
        break;
    default:
        cout<<"Opcion invalida"<<endl;
        break;
        }
    }
    break;
case 4:
    cout<<"juegos ganados del jugador 1: ";Color(6);cout<<PuntosJugagor1<<endl;Color(15);
    cout<<"juegos ganados del jugador 2: ";Color(6);cout<<PuntosJugagor2<<endl;Color(15);
    getch();
    break;
case 5:
    Reglas();
    getch();
    break;
case 6:
    cout<<"Fin del Juego, Gracias por jugar"<<endl;
    getch();
    return 0;
    break;
default:
    cout<<"Opcion no existente";
    getch();
    break;

}
}
    return 0;
}
