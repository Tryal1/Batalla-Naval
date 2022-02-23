#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
void LlenarMatriz0(int Tablero0[][10],int ,int); /// Agua=0 barco=1 fuego=2 fallo=3 isla=4
///Cada jugador ubica los barcos
void BarcosTam1(int TableroJugador[][10],int);
void BarcosTam2(int TableroJugador[][10],int);
void BarcosTam3(int TableroJugador[][10],int);
void BarcosTam4(int TableroJugador[][10],int);
int ContadorBarcos(int Barcos[][10]);
 ///El juego
void DiparosJugador(int Disparos[][10], int cantBarcos, int ronda, int Jnum, int VecG[][10]);
void interfaz(int jugador, int cantBarcos, int ronda);
void MostrarMatriz(int xd[][10]); ///pa probar
 ///
void Reglas();
 ///Visual
void AgrandarVec(int jugador[][10]);
void MostrarPosiBarcos(int Vec[][10]);
void Islas(int matriz[][10],int NumIslas);
void BarcosFinal (int matriz[10][10]);///final pos
void CopiarMatriz (int Matriz1[][10],int Matriz2[][10] );
void CargarDibujos (int DibBarco[3][5] ,int DibAgua[3][5], int DibFallo[3][5], int DibBarcoh[3][5], int DibIsla[3][5]);
void Dibujar (int Dibujo[3][5]);
void GameOver1();///facherito
void GameOver2();///fachero
void Color(int N);
 ///""""""IA""""""
void IABarcosTam1(int TableroJugador[][10],int,int, int Barcos);
void IABarcosTam2(int TableroJugador[][10],int,int, int Barcos2);
void IABarcosTam3(int TableroJugador[][10],int,int, int Barcos3);
void IABarcosTam4(int TableroJugador[][10],int,int, int Barcos4);
void DisparosIA(int Disparos[][10], int cantBarcos, int ronda, int Jnum, int VecG[][10]);

void LlenarMatriz0(int Tablero0[][10], int NFilas, int Ncol){
void GameOver1();
    for(int x=0; x<=9; x++){
        for(int i=0; i<=9; i++){
            Tablero0[x][i]=0;
        }
        }

}

void BarcosTam1(int TableroJugador[][10],int,int, int Barcos){
        int Fila, Columna, i=0;
        while(Barcos!=i){
        system("cls");
        MostrarPosiBarcos(TableroJugador);
        cout<<"Barco #"<<i+1<<endl;
        cout<<"Ingrese la Fila: ";
        cin>>Fila;
        cout<<"Ingrese la Columna: ";
        cin>>Columna;
        if(TableroJugador[Fila-1][Columna-1]==0){
            TableroJugador[Fila-1][Columna-1]=1;
            i++;
        }
        else{
            cout<<"Posicion ocupada o erronea, Vuelva a elegir"<<endl;
            getch();
            }
        }
        cout<<"-----------------------"<<endl;

}

void BarcosTam2(int TableroJugador[][10], int, int, int Barcos2){

int Fila, Columna, i=0,posi,cont=0;
        while(Barcos2!=i){
        system("cls");
        MostrarPosiBarcos(TableroJugador);
        cout<<"Ingrese la punta del Destructor #"<<i+1<<endl;
        cout<<"Ingrese la Fila: ";
        cin>>Fila;
        cout<<"Ingrese la Columna: ";
        cin>>Columna;
        if(TableroJugador[Fila-1][Columna-1]==0){
        cout<<"Hacia donde quiere ubicarlo (1 Arriba, 2 Abajo, 3 izquierda, 4 derecha) ";
        cin>>posi;
        switch(posi){
    case 1:
        cont=0;
        for(int i=1; i<=2; i++){
            if(TableroJugador[Fila-i][Columna-1]==0&&(Fila-i<=9&&Fila-i>=0)){
            cont++;
            }
        }
        if(cont==2){
        for(int i=1; i<=2; i++){
        TableroJugador[Fila-i][Columna-1]=1;
        }
        i++;
        }
        else{
            cout<<"Posicion ocupada o erronea, Vuelva a elegir"<<endl;
            getch();
            }
        cout<<"-----------------------"<<endl;
        break;
    case 2:
        cont=0;
        for(int i=1; i>=0; i--){
            if(TableroJugador[Fila-i][Columna-1]==0&&(Fila+i<=9&&Fila+i>=0)){
            cont++;
            }
        }
        if(cont==2){
        for(int i=1; i>=0; i--){
        TableroJugador[Fila-i][Columna-1]=1;
        }
        i++;
        }
        else{
            cout<<"Posicion ocupada o erronea, Vuelva a elegir"<<endl;
            getch();
            }
        cout<<"-----------------------"<<endl;
        break;
    case 3:
        cont=0;
        for(int i=1; i<=2; i++){
            if(TableroJugador[Fila-1][Columna-i]==0&&(Columna-i<=9&&Columna-i>=0)){
            cont++;
            }
        }
        if(cont==2){
        for(int i=1; i<=2; i++){
        TableroJugador[Fila-1][Columna-i]=1;
        }
        i++;
        }
        else{
            cout<<"Posicion ocupada o erronea, Vuelva a elegir"<<endl;
            getch();
            }
        cout<<"-----------------------"<<endl;
        break;
    case 4:
        cont=0;
        for(int i=1; i>=0; i--){
            if(TableroJugador[Fila-1][Columna-i]==0&&(Columna+i<=9&&Columna+i>=0)){
            cont++;
            }
        }
        if(cont==2){
        for(int i=1; i>=0; i--){
        TableroJugador[Fila-1][Columna-i]=1;
        }
        i++;
        }
        else{
            cout<<"Posicion ocupada o erronea, Vuelva a elegir"<<endl;
            getch();
            }
        cout<<"-----------------------"<<endl;
        break;
        }
}
}

}

void BarcosTam3(int TableroJugador[][10], int, int, int Barcos3){
int Fila, Columna, i=0,posi,cont=0;
        while(Barcos3!=i){
        system("cls");
        MostrarPosiBarcos(TableroJugador);
        cout<<"Ingrese la punta del Crucero #"<<i+1<<endl;
        cout<<"Ingrese la Fila: ";
        cin>>Fila;
        cout<<"Ingrese la Columna: ";
        cin>>Columna;
        if(TableroJugador[Fila-1][Columna-1]==0){
        cout<<"Hacia donde quiere ubicarlo (1 Arriba, 2 Abajo, 3 izquierda, 4 derecha) ";
        cin>>posi;
        switch(posi){
    case 1:
        cont=0;
        for(int i=1; i<=3; i++){
            if(TableroJugador[Fila-i][Columna-1]==0&&(Fila-i<=9&&Fila-i>=0)){
            cont++;
            }
        }
        if(cont==3){
        for(int i=1; i<=3; i++){
        TableroJugador[Fila-i][Columna-1]=1;
        }
        i++;
        }
        else{
            cout<<"Posicion ocupada o erronea, Vuelva a elegir"<<endl;
            getch();
            }
        cout<<"-----------------------"<<endl;
        break;
    case 2:
        cont=0;
        for(int i=1; i>=-1; i--){
            if(TableroJugador[Fila-i][Columna-1]==0&&(Fila+i<=9&&Fila+i>=0)){
            cont++;
            }
        }
        if(cont==3){
        for(int i=1; i>=-1; i--){
        TableroJugador[Fila-i][Columna-1]=1;
        }
        i++;
        }
        else{
            cout<<"Posicion ocupada o erronea, Vuelva a elegir"<<endl;
            getch();
            }
        cout<<"-----------------------"<<endl;
        break;
    case 3:
        cont=0;
        for(int i=1; i<=3; i++){
            if(TableroJugador[Fila-1][Columna-i]==0&&(Columna-i<=9&&Columna-i>=0)){
            cont++;
            }
        }
        if(cont==3){
        for(int i=1; i<=3; i++){
        TableroJugador[Fila-1][Columna-i]=1;
        }
        i++;
        }
        else{
            cout<<"Posicion ocupada o erronea, Vuelva a elegir"<<endl;
            getch();
            }
        cout<<"-----------------------"<<endl;
        break;
    case 4:
        cont=0;
        for(int i=1; i>=-1; i--){
            if(TableroJugador[Fila-1][Columna-i]==0&&(Columna+i<=9&&Columna+i>=0)){
            cont++;
            }
        }
        if(cont==3){
        for(int i=1; i>=-1; i--){
        TableroJugador[Fila-1][Columna-i]=1;
        }
        i++;
        }
        else{
            cout<<"Posicion ocupada o erronea, Vuelva a elegir"<<endl;
            getch();
            }
        cout<<"-----------------------"<<endl;
        break;
        }
}
}
}

void BarcosTam4(int TableroJugador[][10], int , int , int Barcos4){
int Fila, Columna, p=0,posi,cont=0;
        while(Barcos4!=p){
        system("cls");
        MostrarPosiBarcos(TableroJugador);
        cout<<"Ingrese la punta del Acorazado #"<<p+1<<endl;
        cout<<"Ingrese la Fila: ";
        cin>>Fila;
        cout<<"Ingrese la Columna: ";
        cin>>Columna;
        if(TableroJugador[Fila-1][Columna-1]==0){
        cout<<"Hacia donde quiere ubicarlo (1 Arriba, 2 Abajo, 3 izquierda, 4 derecha) ";
        cin>>posi;
        switch(posi){
    case 1:
        cont=0;
        for(int i=1; i<=4; i++){
            if(TableroJugador[Fila-i][Columna-1]==0&&(Fila-i<=9&&Fila-i>=0)){
            cont++;
            }
        }
        if(cont==4){
        for(int i=1; i<=4; i++){
        TableroJugador[Fila-i][Columna-1]=1;
        }
        p++;
        }
        else{
            cout<<"Posicion ocupada o erronea, Vuelva a elegir"<<endl;
            getch();
            }
        cout<<"-----------------------"<<endl;
        break;
    case 2:
        cont=0;
        for(int i=1; i>=-2; i--){
            if(TableroJugador[Fila-i][Columna-1]==0&&(Fila-i<=9&&Fila-i>=0)){
            cont++;
            }
        }
        if(cont==4){
        for(int i=1; i>=-2; i--){
        TableroJugador[Fila-i][Columna-1]=1;
        }
        p++;
        }
        else{
            cout<<"Posicion ocupada o erronea, Vuelva a elegir"<<endl;
            getch();
            }
        cout<<"-----------------------"<<endl;
        break;
    case 3:
        cont=0;
        for(int i=1; i<=4; i++){
            if(TableroJugador[Fila-1][Columna-i]==0&&(Columna-i<=9&&Columna-i>=0)){
            cont++;
            }
        }
        if(cont==4){
        for(int i=1; i<=4; i++){
        TableroJugador[Fila-1][Columna-i]=1;
        }
        p++;
        }
        else{
            cout<<"Posicion ocupada o erronea, Vuelva a elegir"<<endl;
            getch();
            }
        cout<<"-----------------------"<<endl;
        break;
    case 4:
        cont=0;
        for(int i=1; i>=-2; i--){
            if(TableroJugador[Fila-1][Columna-i]==0&&(Columna-i<=9&&Columna-i>=0)){
            cont++;
            }
        }
        if(cont==4){
        for(int i=1; i>=-2; i--){
        TableroJugador[Fila-1][Columna-i]=1;
        }
        p++;
        }
        else{
            cout<<"Posicion ocupada o erronea, Vuelva a elegir"<<endl;
            getch();
            }
        cout<<"-----------------------"<<endl;
        break;
        }
}
}
}

int ContadorBarcos(int Barcos[][10]){
    int cont=0;
    for(int x=0; x<=9; x++){
            for(int i=0; i<=9; i++){
                    if(Barcos[x][i]==1){
                        cont++;
                    }
                }
    }
return cont;
}

void DiparosJugador(int Disparos[][10], int cantBarcos, int ronda, int Jnum, int VecG[][10]){
    int cont=0, Fila, Columna;
    while(cont!=1){
    if(cantBarcos!=0){
    system("cls");
    interfaz(Jnum,cantBarcos,ronda);
    cout<<endl;
    AgrandarVec(VecG);
    cout<<endl;
    cout<<"Ingrese la fila del disparo: ";
    cin>>Fila;
    cout<<"Ingrese la columna del disparo: ";
    cin>>Columna;
    if(Disparos[Fila-1][Columna-1]==0){
    cout<<"Disparo fallido.";
    Disparos[Fila-1][Columna-1]=3;
    cont++;
    }
    else if(Disparos[Fila-1][Columna-1]==1){
    Disparos[Fila-1][Columna-1]=2;
    cout<<"Disparo exitoso, vuelva a disparar"<<endl;
    cantBarcos=cantBarcos-1;
    }
    else if(Disparos[Fila-1][Columna-1]==2||Disparos[Fila-1][Columna-1]==3){
    cout<<"Ya se ha disparado en esa posicion, vuelva a disparar"<<endl;
    }else if (Disparos[Fila-1][Columna-1]==2||Disparos[Fila-1][Columna-1]==4){
    cout<<"No se puede disparar a una isla!"<<endl;
    }

    getch();
    system("cls");

    }
    else{
    cont=1;
    }
    }

}

void interfaz(int jugador, int cantBarcos, int ronda){
for(int i=1; i<=45; i++)cout<<" ";
cout<<(char)201;
for(int i=1; i<=150; i++)cout<<(char)205;
cout<<(char)187;
cout<<endl;
for(int i=1; i<=45; i++)cout<<" ";
cout<<(char)186;
for(int i=1; i<=45; i++)cout<<" ";
cout<<"Jugador: "<<jugador<<" Cantidad de objetivos restantes: "<<cantBarcos<<" Ronda: "<<ronda;
for(int i=1; i<=51; i++)cout<<" ";
cout<<(char)186;
cout<<endl;
for(int i=1; i<=45; i++)cout<<" ";
cout<<(char)200;
for(int i=1; i<=150; i++)cout<<(char)205;
cout<<(char)188;
cout<<endl;
}

void MostrarMatriz(int xd[][10]){
for(int x=0; x<=9; x++){
        cout<<endl;
    for(int i=0; i<=9; i++){
        cout<<xd[x][i];
    }
}
}

void Reglas(){
    int DibBarco[3][5], DibAgua[3][5],DibFallo[3][5],DibBarcoh[3][5], DibIsla[3][5];
    CargarDibujos ( DibBarco , DibAgua,DibFallo, DibBarcoh, DibIsla);
    Color(11);
cout<<"Reglas"<<endl;Color(15);
cout<<"Recomendado jugar en pantalla completa"<<endl;
getch();
cout<<"1.";Color(11);cout<<" Objetivo"<<endl;Color(15);
cout<<"El objetivo del juego es undir los 10 barcos del enemigo antes de que unda los tuyos"<<endl;
cout<<endl;
getch();
cout<<"2.";Color(11);cout<<" Tablero"<<endl;Color(15);
cout<<"El modo de juego principal consta de una un tabla de 10 filas x 10 columnas"<<endl;
cout<<"cada jugador posee 2 tableros el primero es donde van ubicados sus barcos, este tablero no se ve."<<endl;
cout<<"El segundo, donde si se puede ver, es donde disparaste en el territorio del enemigo "<<endl;
cout<<endl;
getch();
cout<<"3.";Color(11);cout<<" Flota"<<endl;Color(15);
cout<<"La flota de cada jugador esta compuesta por 10 barcos"<<endl;
cout<<"1 Acorazado que ocupa 4 casillas"<<endl;
cout<<"2 Cruceros que ocupa 3 casillas"<<endl;
cout<<"3 Destructores que ocupa 2 casillas"<<endl;
cout<<"4 submarinos que ocupa 1 casillas"<<endl;
cout<<"Con posibilidad de modificar la cantidad de barcos que quiera"<<endl;
cout<<"Los barcos con mas de una casilla se Deben colocar de izquierda a derecha o viceversa"<<endl;
cout<<"Si no tambion de arriba a abjo o viceversa, no se pueden colocar en diagonal"<<endl;
cout<<endl;
getch();
cout<<"4.";Color(11);cout<<" Reglas Generales"<<endl;Color(15);
cout<<"* Numero de jugadores 2"<<endl;
cout<<"* Aunque tambien podremos jugar en contra de la maquina"<<endl;
cout<<"* Una vez posicionados los barcos no se pueden mover y comienza el juego"<<endl;
cout<<"* Se puede disparar en cualquier casilla menos en las que ya has disparado "<<endl;
cout<<"* No puedes deshacer los disparos"<<endl;
cout<<"*El juego va por turnos, cada vez que un jugador dispare y falle (agua) pasa el turno al otro jugador"<<endl;
cout<<"Pero si acierta o hunde un barco vuelve a disparar, si dispara en un lugar que se haya disparado vuelve a disparar"<<endl;
cout<<"* Una vez destruidos los barcos del enemigo finaliza el juego"<<endl;
cout<<"* Cada vez que un Jugador gana una partida se le suma un punto"<<endl;
cout<<"* Podras acceder al contador de puntos desde el menu, el ganador definitivo sera el que mayor cantidad de puntos acumule cuando se decida finalizar"<<endl;
cout<<endl;
getch();
cout<<"5.";Color(11);cout<<" Visual"<<endl;Color(15);
cout<<"*Fuera del tablero siempre habra una guia del numero de filas (izquierda del tablero) y de columnas (Arriba del tablero)"<<endl;
cout<<"*Dentro del tablero se mostraran distintos dibujos:"<<endl;
getch();
cout<<"-Agua:"<<endl;
cout<<"Al momento de posicionar los barcos el agua representara las casillas libres donde puedes posicionar tu flota"<<endl;
cout<<"Sin embargo durante la batalla el agua seran las cordenadas donde no has disparado y donde pueden ocultarse las flotas enemigas"<<endl;
Dibujar (DibAgua);
getch();
cout<<endl;
cout<<"-Barcos:"<<endl;
cout<<"* Al momento de ingresar tus barcos, podras ver los barcos colocados por pantalla de esta forma:"<<endl;
Dibujar(DibBarco);
getch();
cout<<endl;
cout<<"Mientras que durante la batalla los barcos solo seran vistos una vez sean explotados, viendose de la siguiente forma:"<<endl;
Dibujar(DibBarcoh);
getch();
cout<<endl;
cout<<"-Fallo:"<<endl;
cout<<"Durante la batalla es normal olvidar donde ya se ha disparado, por lo cual marcaremos tus disparos fallidos con el siguiente dibujo:"<<endl;
Dibujar(DibFallo);
getch();
cout<<endl;
cout<<"-Islas:"<<endl;
cout<<"Por ultimo las islas, un agregado opcional al juego que dara dinamismo de partida en partida cambiando el ambiente que nos rodea de forma aleatoria"<<endl;
cout<<"Puedes agregar la cantidad de islas que quieres que tenga el mapa desde el menu de opciones "<<endl;
cout<<"Estas islas impiden la posicion de barcos y no pueden recibir disparos, su unica funcion es entorpecer al jugador y se ven asi: "<<endl;
Dibujar(DibIsla);
cout<<endl;
cout<<"Precione cualquier tecla para volver al menu..."<<endl;

getch();


}

void AgrandarVec(int Vec[][10]){
/// Agua=0 barco=1 fuego=2 fallo=3
int p,x,j,t,c=0,U=0,O=0,Num=1;
 int VecG[30][50];
//agrandar vector
 for(p=0;p<=9;p++){
 for(x=0;x<=9;x++){
if(Vec[p][x]==0){//reemplazo de 0
    for(j=0;j<=2;j++){
            for(t=0;t<=4;t++){
        VecG[p*3+j][x*5+t]=0;
    }
}
 }

 if(Vec[p][x]==1){//reemplazo de 1
    for(j=0;j<=2;j++){
    for(t=0;t<=4;t++){
            VecG[p*3+j][x*5+t]=1;
    }
}
 }
 if(Vec[p][x]==3){//reemplazo de 3
    for(j=0;j<=2;j++){
    for(t=0;t<=4;t++){
        if((j==0&&t==1)||(j==2&&t==3)){

        VecG[p*3+j][x*5+t]=9;//"\9"
        }
        else{
    if((j==0&&t==3)||(j==2&&t==1)){
        VecG[p*3+j][x*5+t]=10;//"/10"
        }
        else{
        if(j==1&&t==2){
        VecG[p*3+j][x*5+t]=11;//"X11"
        }else{
        VecG[p*3+j][x*5+t]=0;

        }
        }
    }

}
 }
 }
 if(Vec[p][x]==2){//reemplazo de 2
    for(j=0;j<=2;j++){
    for(t=0;t<=4;t++){
            if((j==0&&t==1)||(j==0&&t==2)||(j==0&&t==3)){
               VecG[p*3+j][x*5+t]=3;//"fuego3"
               }else {if(j==1){
                VecG[p*3+j][x*5+t]=3;//"Fuego3"
               }else{if((j==2&&t==1)||(j==2&&t==2)||(j==2&&t==3)){
                VecG[p*3+j][x*5+t]=3;
               }else{
                        VecG[p*3+j][x*5+t]=0;}
            }
    }
    }

}
 }
 if(Vec[p][x]==4){//reemplazo de 4
    for(j=0;j<=2;j++){
    for(t=0;t<=4;t++){
            if(j==0&&t==2){
               VecG[p*3+j][x*5+t]=6;//"Planta6"
               }else {if((j==1&&t==1)||(j==1&&t==2)||(j==1&&t==3)){
                VecG[p*3+j][x*5+t]=5;//"Arena5"
               }else{if((j==2&&t==1)||(j==2&&t==2)||(j==2&&t==3)){
                VecG[p*3+j][x*5+t]=4;//"Arenita4"
                        }else{
                        VecG[p*3+j][x*5+t]=0;
                        }
            }

    }
    }

}
 }
 }
 }


 cout<<endl;
//mostrador visual
//Numeros de arriba
cout<<"    ";
for(p=1;p<=10;p++){
cout<<(char)201<<(char)205<<(char)187<<"   ";

}
cout<<endl;
cout<<"    ";
for(p=1;p<=10;p++){
if(p==10){
                  cout<<p<<(char)186<<"   ";
                }
                else{
cout<<(char)186<<p<<(char)186<<"   ";}
}
cout<<endl;
cout<<"    ";
for(p=1;p<=10;p++){
cout<<(char)200<<(char)205<<(char)188<<"   ";

}
cout<<endl;

for(p=0;p<=29;p++){
        c=0;
        //Numeros costado
        if(O==0){
cout<<(char)201<<(char)205<<(char)187;
}
         if(O==1){
                if(Num==10){
                  cout<<Num<<(char)186;
                }
                else{
cout<<(char)186<<Num<<(char)186;}
}
         if(O==2){
cout<<(char)200<<(char)205<<(char)188;
}


 for(x=0;x<=49;x++){
        c++;

//Dibujos
if(VecG[p][x]==0){
         SetConsoleTextAttribute(hConsole, 3);
    cout<<(char)177; //AGUA
         SetConsoleTextAttribute(hConsole, 15);

    }
    if(VecG[p][x]==1){
             SetConsoleTextAttribute(hConsole, 3);
    cout<<(char)177; //AGUA "FALSA"
             SetConsoleTextAttribute(hConsole, 15);

    }
if(VecG[p][x]==9){
                 SetConsoleTextAttribute(hConsole, 14);
    cout<<(char)92; //PUNTAS EQUIS
                 SetConsoleTextAttribute(hConsole, 15);

    }
if(VecG[p][x]==10){
                     SetConsoleTextAttribute(hConsole, 14);
    cout<<(char)47; //PUNTAS EQUIS
             SetConsoleTextAttribute(hConsole, 15);

    }
if(VecG[p][x]==11){
                     SetConsoleTextAttribute(hConsole, 14);
    cout<<(char)88; //CENTRO EQUIS
             SetConsoleTextAttribute(hConsole, 15);
    }
if(VecG[p][x]==8){
                     SetConsoleTextAttribute(hConsole,8 );
    cout<<(char)177; //HUMO
             SetConsoleTextAttribute(hConsole, 15);
    }
if(VecG[p][x]==3){
                     SetConsoleTextAttribute(hConsole, 4);
    cout<<(char)219; //FUEGO
             SetConsoleTextAttribute(hConsole, 15);
    }
if(VecG[p][x]==6){
                     SetConsoleTextAttribute(hConsole, 2);
    cout<<(char)05; //PLANTA
             SetConsoleTextAttribute(hConsole, 15);
    }
if(VecG[p][x]==5){
                     SetConsoleTextAttribute(hConsole, 14);
    cout<<(char)219; //ARENA
             SetConsoleTextAttribute(hConsole, 15);
    }
if(VecG[p][x]==4){
                     SetConsoleTextAttribute(hConsole, 14);
    cout<<(char)223; //ARENITA
             SetConsoleTextAttribute(hConsole, 15);
    }
//
if(c==5){
    cout<<" ";
    c=0;
    U++;
}
if(U==10){
    cout<<endl;
    U=0;
}
 }
 O++;
 if(O==3){
    cout<<endl;
    O=0;
    Num++;
 }
}
}

void MostrarPosiBarcos(int Vec[][10]){
int i,x,j,t,c=0,U=0,O=0,Num=1,VecG[30][50];
//para posicion de barcos
for(i=0;i<=9;i++){
 for(x=0;x<=9;x++){
if(Vec[i][x]==0){//reemplazo de 0
    for(j=0;j<=2;j++){
            for(t=0;t<=4;t++){
        VecG[i*3+j][x*5+t]=0;
    }
}
 }

 if(Vec[i][x]==1){//reemplazo de 1
    for(j=0;j<=2;j++){
    for(t=0;t<=4;t++){
            if(((j==0||j==2)&&(t==1)||(t==2)||(t==3))||(j==1)){
            VecG[i*3+j][x*5+t]=1;}
            else{VecG[i*3+j][x*5+t]=0;}

    }
}
 }
  if(Vec[i][x]==4){//reemplazo de 4
    for(j=0;j<=2;j++){
    for(t=0;t<=4;t++){
            if(j==0&&t==2){
               VecG[i*3+j][x*5+t]=6;//"Planta6"
               }else {if((j==1&&t==1)||(j==1&&t==2)||(j==1&&t==3)){
                VecG[i*3+j][x*5+t]=5;//"Arena5"
               }else{if((j==2&&t==1)||(j==2&&t==2)||(j==2&&t==3)){
                VecG[i*3+j][x*5+t]=4;//"Arenita4"
                        }else{
                        VecG[i*3+j][x*5+t]=0;
                        }
            }

    }
    }

}
 }
 }
}





//mostrador visual
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
//Numeros de arriba
cout<<"    ";
for(i=1;i<=10;i++){
cout<<(char)201<<(char)205<<(char)187<<"   ";

}
cout<<endl;
cout<<"    ";
for(i=1;i<=10;i++){
if(i==10){
                  cout<<i<<(char)186<<"   ";
                }
                else{
cout<<(char)186<<i<<(char)186<<"   ";}
}
cout<<endl;
cout<<"    ";
for(i=1;i<=10;i++){
cout<<(char)200<<(char)205<<(char)188<<"   ";

}
cout<<endl;

for(i=0;i<=29;i++){
        c=0;
        //Numeros costado
        if(O==0){
cout<<(char)201<<(char)205<<(char)187;
}
         if(O==1){
                if(Num==10){
                  cout<<Num<<(char)186;
                }
                else{
cout<<(char)186<<Num<<(char)186;}
}
         if(O==2){
cout<<(char)200<<(char)205<<(char)188;
}


 for(x=0;x<=49;x++){
        c++;

//Dibujos
if(VecG[i][x]==0){
         SetConsoleTextAttribute(hConsole, 3);
    cout<<(char)177; //AGUA
         SetConsoleTextAttribute(hConsole, 15);

    }
    if(VecG[i][x]==1){
             SetConsoleTextAttribute(hConsole, 6);
    cout<<(char)219; //Barco
             SetConsoleTextAttribute(hConsole, 15);

    }
    if(VecG[i][x]==6){
                     SetConsoleTextAttribute(hConsole, 2);
    cout<<(char)05; //PLANTA
             SetConsoleTextAttribute(hConsole, 15);
    }
if(VecG[i][x]==5){
                     SetConsoleTextAttribute(hConsole, 14);
    cout<<(char)219; //ARENA
             SetConsoleTextAttribute(hConsole, 15);
    }
if(VecG[i][x]==4){
                     SetConsoleTextAttribute(hConsole, 14);
    cout<<(char)223; //ARENITA
             SetConsoleTextAttribute(hConsole, 15);
    }
    if(c==5){
    cout<<" ";
    c=0;
    U++;
}
if(U==10){
    cout<<endl;
    U=0;
}
 }
 O++;
 if(O==3){
    cout<<endl;
    O=0;
    Num++;
 }
}
}

void Islas (int matriz[][10], int NumIslas){
        srand(time(NULL));
int Fila,Columna, i=0;
while(i!=NumIslas){
    Fila= rand()%9;
    Columna=rand()%9;
    matriz[Fila][Columna]=4;
    i++;
}

}

void BarcosFinal(int matriz [][10]){
system("cls");
        MostrarPosiBarcos(matriz);
cout<<endl;
cout<<"Asi quedaron los barcos del jugador";
            getch();
system("cls");
}

void CopiarMatriz (int Matriz1[][10],int Matriz2[][10] ){
for(int i=0;i<=9;i++){
    for(int x=0;x<=9;x++){
    Matriz2[i][x]=Matriz1[i][x];
}
}


}

void CargarDibujos (int DibBarco[3][5], int DibAgua[3][5], int DibFallo[3][5], int DibBarcoh[3][5], int DibIsla[3][5]){
//Dibujo barco
for(int i=0;i<=2;i++){
 for(int x=0;x<=4;x++){
    DibBarco[i][x]=0;
 if((i==0||i==2)&&(x==1||x==2||x==3)){
        DibBarco[i][x]=1;
 }else if(i==1){
         DibBarco[i][x]=1;
 }
 }
}
//Dibujo AGUA
for(int i=0;i<=2;i++){
 for(int x=0;x<=4;x++){
   DibAgua[i][x]=0;
 }
}
//Dibujo barco hundido
for(int i=0;i<=2;i++){
 for(int x=0;x<=4;x++){
    DibBarcoh[i][x]=0;
 if((i==0||i==2)&&(x==1||x==2||x==3)){
        DibBarcoh[i][x]=2;
 }else if(i==1){
         DibBarcoh[i][x]=2;
 }
 }
}
//Dibujo Disparo fallido
for(int i=0;i<=2;i++){
 for(int x=0;x<=4;x++){
    DibFallo[i][x]=0;
 if((i==0&&x==1)||(i==2&&x==3)){
        DibFallo[i][x]=3;
 }else if ((i==0&&x==3)||(i==2&&x==1)){
        DibFallo[i][x]=4;
        }else if(i==1&&x==2){
                DibFallo[i][x]=5;

        }
 }
 }
 //Dibujo isla
for(int i=0;i<=2;i++){
 for(int x=0;x<=4;x++){
    DibIsla[i][x]=0;
 if(i==0&&x==2){
        DibIsla[i][x]=6;
 }else if ((i==1)&&(x==1||x==2||x==3)){
        DibIsla[i][x]=7;
        }else if((i==2)&&(x==1||x==2||x==3)){
                DibIsla[i][x]=8;

        }
 }
 }

}

void Dibujar (int Dibujo[3][5]){
for(int i=0; i<=2;i++){
        cout<<endl;
 for(int x=0; x<=4;x++){
    if(Dibujo[i][x]==0){
             SetConsoleTextAttribute(hConsole, 3);
        cout<<(char)177;
         SetConsoleTextAttribute(hConsole, 15);
    }
 if(Dibujo[i][x]==1){
             SetConsoleTextAttribute(hConsole, 6);
        cout<<(char)219;
         SetConsoleTextAttribute(hConsole, 15);
    }

 if(Dibujo[i][x]==2){
             SetConsoleTextAttribute(hConsole, 4);
        cout<<(char)219;
         SetConsoleTextAttribute(hConsole, 15);
    }
    if(Dibujo[i][x]==3){
             SetConsoleTextAttribute(hConsole, 14);
        cout<<(char)92;
         SetConsoleTextAttribute(hConsole, 15);
    }
    if(Dibujo[i][x]==4){
             SetConsoleTextAttribute(hConsole, 14);
        cout<<(char)47;
         SetConsoleTextAttribute(hConsole, 15);
    }
    if(Dibujo[i][x]==5){
             SetConsoleTextAttribute(hConsole, 14);
        cout<<(char)88;
         SetConsoleTextAttribute(hConsole, 15);
    }
        if(Dibujo[i][x]==6){
             SetConsoleTextAttribute(hConsole, 2);
        cout<<(char)5;
         SetConsoleTextAttribute(hConsole, 15);
    }
     if(Dibujo[i][x]==7){
             SetConsoleTextAttribute(hConsole, 14);
        cout<<(char)219;
         SetConsoleTextAttribute(hConsole, 15);
    }
    if(Dibujo[i][x]==8){
             SetConsoleTextAttribute(hConsole, 14);
        cout<<(char)223;
         SetConsoleTextAttribute(hConsole, 15);
    }
 }
 }
}

void GameOver1(){
     for(int i=0;i<=9;i++){
cout<<"                                                     "<<(char)219<<"                                                                                                                                        "<<endl;
cout<<"                                                                                                                                          "<<(char)219<<"                                                   "<<endl;
cout<<"                                                                                                 "<<(char)219<<"                                                                                            "<<endl;
cout<<"                                                                                                                                                                         "<<(char)219<<"                    "<<endl;
cout<<"                                                                                 "<<(char)219<<"                                                                                                            "<<endl;
cout<<"                                                                                                                                   "<<(char)219<<"                                                          "<<endl;
cout<<"                                                                                                       "<<(char)219<<"                                                                                      "<<endl;
cout<<"                                                                                                                                                                                             "<<endl;
cout<<"                                                                                                                                                                        "<<(char)219<<"                     "<<endl;
cout<<"                                                                                     "<<(char)219<<"                                                                                                        "<<endl;
cout<<"                                                                  "<<(char)219<<"                                                           "<<(char)219<<"                                                                "<<endl;
cout<<"                                                                                                                                                                                             "<<endl;
cout<<"                                                                                                                                                                                             "<<endl;
cout<<"                                                                                                                               "<<(char)219<<"                                                              "<<endl;
cout<<"                                                                                                        "<<(char)219<<"                                                                                     "<<endl;
cout<<"                                                         "<<(char)219<<"                                                                                                                                    "<<endl;
cout<<"                                                                                                                                                                                             "<<endl;
cout<<"                                                                  "<<(char)219<<"                                                                                                                           "<<endl;
cout<<"                                                      "<<(char)219<<"                                                                                 "<<(char)219<<"                                                      "<<endl;
cout<<"                                                                                                                  "<<(char)219<<"                                                                           "<<endl;
cout<<"                                                                                                                                                                                             "<<endl;
cout<<"                                                                                                   "<<(char)219<<"                                                                                          "<<endl;
cout<<"                                                                                                                                                                                             "<<endl;
cout<<"                                                                             "<<(char)219<<"                                                             "<<(char)219<<"                                                   "<<endl;
cout<<"                                                                                                                                                                                             "<<endl;
cout<<"                                                             "<<(char)219<<"                                                                                                                                "<<endl;
cout<<"                                                                                                                                                                                             "<<endl;
    }
    for(int x=0;x<=6;x++){
        system("cls");
cout<<endl;
cout<<endl;
cout<<"                                                                              ";for(int i=0;i<=17;i++){ cout<<(char)219;} cout<<"        ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                              ";for(int i=0;i<=17;i++){ cout<<(char)219;} cout<<"       ";for(int i=0;i<=9;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                              ";for(int i=0;i<=17;i++){ cout<<(char)219;} cout<<"      ";for(int i=0;i<=10;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"         ";for(int i=0;i<=11;i++){ cout<<(char)219;} cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"        ";for(int i=0;i<=12;i++){ cout<<(char)219;} cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"            ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"            ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"            ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"            ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"            ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"            ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"            ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"            ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"            ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                             ";cout<<(char)219<<(char)219; cout<<"   ";for(int i=0;i<=8;i++){ cout<<(char)219;} cout<<"             ";for(int i=0;i<=8;i++){ cout<<(char)219;} cout<<endl;
cout<<"                                                                              ";for(int i=0;i<=10;i++){ cout<<(char)219;}cout<<"           ";for(int i=0;i<=16;i++){ cout<<(char)219;}cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                                                                               ";for(int i=0;i<=4;i++){ cout<<(char)219;}cout<<"     ";for(int i=0;i<=2;i++){ cout<<(char)219;}cout<<"             ";for(int i=0;i<=2;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                              "<<(char)219<<"             "<<(char)219<<"   ";for(int i=0;i<=4;i++){ cout<<(char)219;}cout<<"       "<<(char)219<<"             "<<endl;
cout<<"                                                                              "<<(char)219<<"         ";for(int i=0;i<=4;i++){ cout<<(char)219;}cout<<"   "<<(char)219<<"    "<<(char)219<<"   ";for(int i=0;i<=4;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                              "<<(char)219<<"  ";for(int i=0;i<=3;i++){ cout<<(char)219;}cout<<"  "<<(char)219<<"    "<<(char)219<<"   "<<(char)219<<"    "<<(char)219<<"  "<<(char)219<<"    "<<(char)219<<endl;
cout<<"                                                                              "<<(char)219<<"     "<<(char)219<<"  "<<(char)219<<"    "<<(char)219<<"   "<<(char)219<<"    "<<(char)219<<"  "<<(char)219<<"    "<<(char)219<<endl;
cout<<"                                                                               ";for(int i=0;i<=4;i++){ cout<<(char)219;}cout<<"    ";for(int i=0;i<=3;i++){ cout<<(char)219;}cout<<" "<<(char)219<<"  "<<(char)219<<"    "<<(char)219<<"   ";for(int i=0;i<=3;i++){ cout<<(char)219;}cout<<" "<<(char)219<<endl;
    }
cout<<endl;
getch();
}

void GameOver2(){
    for(int i=0;i<=9;i++){
cout<<"                                                     "<<(char)219<<"                                                                                                                                        "<<endl;
cout<<"                                                                                                                                          "<<(char)219<<"                                                   "<<endl;
cout<<"                                                                                                 "<<(char)219<<"                                                                                            "<<endl;
cout<<"                                                                                                                                                                         "<<(char)219<<"                    "<<endl;
cout<<"                                                                                 "<<(char)219<<"                                                                                                            "<<endl;
cout<<"                                                                                                                                   "<<(char)219<<"                                                          "<<endl;
cout<<"                                                                                                       "<<(char)219<<"                                                                                      "<<endl;
cout<<"                                                                                                                                                                                             "<<endl;
cout<<"                                                                                                                                                                        "<<(char)219<<"                     "<<endl;
cout<<"                                                                                     "<<(char)219<<"                                                                                                        "<<endl;
cout<<"                                                                  "<<(char)219<<"                                                           "<<(char)219<<"                                                                "<<endl;
cout<<"                                                                                                                                                                                             "<<endl;
cout<<"                                                                                                                                                                                             "<<endl;
cout<<"                                                                                                                               "<<(char)219<<"                                                              "<<endl;
cout<<"                                                                                                        "<<(char)219<<"                                                                                     "<<endl;
cout<<"                                                         "<<(char)219<<"                                                                                                                                    "<<endl;
cout<<"                                                                                                                                                                                             "<<endl;
cout<<"                                                                  "<<(char)219<<"                                                                                                                           "<<endl;
cout<<"                                                      "<<(char)219<<"                                                                                 "<<(char)219<<"                                                      "<<endl;
cout<<"                                                                              "<<(char)219<<"                                                                                                               "<<endl;
cout<<"                                                                                                                                                                                             "<<endl;
cout<<"                                                               "<<(char)219<<"                                                                                                                              "<<endl;
cout<<"                                                                                                                                                                                             "<<endl;
cout<<"                                                                             "<<(char)219<<"                                                             "<<(char)219<<"                                                   "<<endl;
cout<<"                                                                                                                                                                                             "<<endl;
cout<<"                                                             "<<(char)219<<"                                                                                                                                "<<endl;
cout<<"                                                                                                                                                                                             "<<endl;
    }
    for(int x=0;x<=6;x++){
        system("cls");

cout<<endl;
cout<<endl;
cout<<"                                                                              ";for(int i=0;i<=17;i++){ cout<<(char)219;} cout<<endl;
cout<<"                                                                              ";for(int i=0;i<=17;i++){ cout<<(char)219;} cout<<"        ";for(int i=0;i<=9;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                              ";for(int i=0;i<=17;i++){ cout<<(char)219;} cout<<"       ";for(int i=0;i<=11;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"          ";for(int i=0;i<=13;i++){ cout<<(char)219;} cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"         "<<(char)219<<(char)219<<(char)219<<"   ";for(int i=0;i<=9;i++){ cout<<(char)219;} cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"         "<<(char)219<<"      ";for(int i=0;i<=9;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"         "<<(char)219<<"      ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"                ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"               ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"              ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"             ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"            ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"           ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                                   ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<"          ";for(int i=0;i<=8;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                             ";cout<<(char)219<<(char)219; cout<<"   ";for(int i=0;i<=8;i++){ cout<<(char)219;} cout<<"          ";for(int i=0;i<=8;i++){ cout<<(char)219;} cout<<endl;
cout<<"                                                                              ";for(int i=0;i<=10;i++){ cout<<(char)219;}cout<<"           ";for(int i=0;i<=16;i++){ cout<<(char)219;}cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                                                                               ";for(int i=0;i<=4;i++){ cout<<(char)219;}cout<<"     ";for(int i=0;i<=2;i++){ cout<<(char)219;}cout<<"             ";for(int i=0;i<=2;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                              "<<(char)219<<"             "<<(char)219<<"   ";for(int i=0;i<=4;i++){ cout<<(char)219;}cout<<"       "<<(char)219<<"             "<<endl;
cout<<"                                                                              "<<(char)219<<"         ";for(int i=0;i<=4;i++){ cout<<(char)219;}cout<<"   "<<(char)219<<"    "<<(char)219<<"   ";for(int i=0;i<=4;i++){ cout<<(char)219;}cout<<endl;
cout<<"                                                                              "<<(char)219<<"  ";for(int i=0;i<=3;i++){ cout<<(char)219;}cout<<"  "<<(char)219<<"    "<<(char)219<<"   "<<(char)219<<"    "<<(char)219<<"  "<<(char)219<<"    "<<(char)219<<endl;
cout<<"                                                                              "<<(char)219<<"     "<<(char)219<<"  "<<(char)219<<"    "<<(char)219<<"   "<<(char)219<<"    "<<(char)219<<"  "<<(char)219<<"    "<<(char)219<<endl;
cout<<"                                                                               ";for(int i=0;i<=4;i++){ cout<<(char)219;}cout<<"    ";for(int i=0;i<=3;i++){ cout<<(char)219;}cout<<" "<<(char)219<<"  "<<(char)219<<"    "<<(char)219<<"   ";for(int i=0;i<=3;i++){ cout<<(char)219;}cout<<" "<<(char)219<<endl;
cout<<endl;

    }

getch();


}

void Color(int N){
             SetConsoleTextAttribute(hConsole, N);
}

void IABarcosTam1(int TableroJugador[][10],int ,int ,int Barcos){
int Fila, Columna, i=0;
srand(time(NULL));
        while(Barcos!=i){
        Fila=rand()%9;
        Columna=rand()%9;
        if(TableroJugador[Fila-1][Columna-1]==0){
            TableroJugador[Fila-1][Columna-1]=1;
            i++;
        }
}
}

void IABarcosTam2(int TableroJugador[][10],int,int, int Barcos2){
int Fila, Columna, i=0,posi,cont=0;
srand(time(NULL));
        while(Barcos2!=i){
        Fila=rand()%9;
        Columna=rand()%9;
        if(TableroJugador[Fila-1][Columna-1]==0){
        posi=1+rand()%4;
        switch(posi){
    case 1:
        cont=0;
        for(int i=1; i<=2; i++){
            if(TableroJugador[Fila-i][Columna-1]==0&&(Fila-i<=9&&Fila-i>=0)){
            cont++;
            }
        }
        if(cont==2){
        for(int i=1; i<=2; i++){
        TableroJugador[Fila-i][Columna-1]=1;
        }
        i++;
        }

        break;
    case 2:
        cont=0;
        for(int i=1; i>=0; i--){
            if(TableroJugador[Fila-i][Columna-1]==0&&(Fila+i<=9&&Fila+i>=0)){
            cont++;
            }
        }
        if(cont==2){
        for(int i=1; i>=0; i--){
        TableroJugador[Fila-i][Columna-1]=1;
        }
        i++;
        }

        break;
    case 3:
        cont=0;
        for(int i=1; i<=2; i++){
            if(TableroJugador[Fila-1][Columna-i]==0&&(Columna-i<=9&&Columna-i>=0)){
            cont++;
            }
        }
        if(cont==2){
        for(int i=1; i<=2; i++){
        TableroJugador[Fila-1][Columna-i]=1;
        }
        i++;
        }

        break;
    case 4:
        cont=0;
        for(int i=1; i>=0; i--){
            if(TableroJugador[Fila-1][Columna-i]==0&&(Columna+i<=9&&Columna+i>=0)){
            cont++;
            }
        }
        if(cont==2){
        for(int i=1; i>=0; i--){
        TableroJugador[Fila-1][Columna-i]=1;
        }
        i++;
        }

        break;
        }
}
}
}

void IABarcosTam3(int TableroJugador[][10],int,int, int Barcos3){
int Fila, Columna, i=0,posi,cont=0;
srand(time(NULL));
        while(Barcos3!=i){
        Fila=rand()%9;
        Columna=rand()%9;
        if(TableroJugador[Fila-1][Columna-1]==0){
        posi=1+rand()%4;
        switch(posi){
    case 1:
        cont=0;
        for(int i=1; i<=3; i++){
            if(TableroJugador[Fila-i][Columna-1]==0&&(Fila-i<=9&&Fila-i>=0)){
            cont++;
            }
        }
        if(cont==3){
        for(int i=1; i<=3; i++){
        TableroJugador[Fila-i][Columna-1]=1;
        }
        i++;
        }

        break;
    case 2:
        cont=0;
        for(int i=1; i>=-1; i--){
            if(TableroJugador[Fila-i][Columna-1]==0&&(Fila+i<=9&&Fila+i>=0)){
            cont++;
            }
        }
        if(cont==3){
        for(int i=1; i>=-1; i--){
        TableroJugador[Fila-i][Columna-1]=1;
        }
        i++;
        }

        break;
    case 3:
        cont=0;
        for(int i=1; i<=3; i++){
            if(TableroJugador[Fila-1][Columna-i]==0&&(Columna-i<=9&&Columna-i>=0)){
            cont++;
            }
        }
        if(cont==3){
        for(int i=1; i<=3; i++){
        TableroJugador[Fila-1][Columna-i]=1;
        }
        i++;
        }

        break;
    case 4:
        cont=0;
        for(int i=1; i>=-1; i--){
            if(TableroJugador[Fila-1][Columna-i]==0&&(Columna+i<=9&&Columna+i>=0)){
            cont++;
            }
        }
        if(cont==3){
        for(int i=1; i>=-1; i--){
        TableroJugador[Fila-1][Columna-i]=1;
        }
        i++;
        }

        break;
        }
}
}
}

void IABarcosTam4(int TableroJugador[][10],int,int, int Barcos4){
int Fila, Columna, i=0,posi,cont=0;
srand(time(NULL));
        while(Barcos4!=i){
        Fila=rand()%9;
        Columna=rand()%9;
        if(TableroJugador[Fila-1][Columna-1]==0){
        posi=1+rand()%4;
        switch(posi){
    case 1:
        cont=0;
        for(int i=1; i<=4; i++){
            if(TableroJugador[Fila-i][Columna-1]==0&&(Fila-i<=9&&Fila-i>=0)){
            cont++;
            }
        }
        if(cont==4){
        for(int i=1; i<=4; i++){
        TableroJugador[Fila-i][Columna-1]=1;
        }
        i++;
        }

        break;
    case 2:
        cont=0;
        for(int i=1; i>=-2; i--){
            if(TableroJugador[Fila-i][Columna-1]==0&&(Fila+i<=9&&Fila+i>=0)){
            cont++;
            }
        }
        if(cont==4){
        for(int i=1; i>=-2; i--){
        TableroJugador[Fila-i][Columna-1]=1;
        }
        i++;
        }

        break;
    case 3:
        cont=0;
        for(int i=1; i<=4; i++){
            if(TableroJugador[Fila-1][Columna-i]==0&&(Columna-i<=9&&Columna-i>=0)){
            cont++;
            }
        }
        if(cont==4){
        for(int i=1; i<=4; i++){
        TableroJugador[Fila-1][Columna-i]=1;
        }
        i++;
        }

        break;
    case 4:
        cont=0;
        for(int i=1; i>=-2; i--){
            if(TableroJugador[Fila-1][Columna-i]==0&&(Columna+i<=9&&Columna+i>=0)){
            cont++;
            }
        }
        if(cont==4){
        for(int i=1; i>=-2; i--){
        TableroJugador[Fila-1][Columna-i]=1;
        }
        i++;
        }

        break;
        }
}
}
}

void DisparosIA(int Disparos[][10], int cantBarcos, int ronda, int Jnum, int VecG[][10]){
int cont=0, Fila, Columna;
    while(cont!=1){
    if(cantBarcos!=0){
    system("cls");
    interfaz(Jnum,cantBarcos,ronda);
    cout<<endl;
    AgrandarVec(VecG);
    cout<<endl;
    Fila= rand()%9;
    Columna= rand()%9;
    if(Disparos[Fila-1][Columna-1]==0){
    cout<<"Disparo fallido.";
    Disparos[Fila-1][Columna-1]=3;
    cont++;
       getch();
    }
    else if(Disparos[Fila-1][Columna-1]==1){
    Disparos[Fila-1][Columna-1]=2;
    cout<<"Disparo exitoso, vuelve a disparar"<<endl;
    cantBarcos=cantBarcos-1;
       getch();
    }


    system("cls");

    }
    else{
    cont=1;
    }
    }


}





#endif // FUNCTION_H_INCLUDED
