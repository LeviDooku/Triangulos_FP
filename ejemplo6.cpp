/////////////////////////////
//Pedro Velasco Santana,   //
//2D - Ing. Infor. UGR     //
//File: ejemplo6.cpp       //
/////////////////////////////

//g++ -o prueba ejemplo6.cpp; ./prueba

#include <iostream>

using namespace std;

/*
            X
           XXX
          XXXXX
         XXXXXXX
        XXXXXXXXX
       XXXXXXXXXXX
      XXXXXXXXXXXXX
     XXXXXXXXXXXXXXX
    XXXXXXXXXXXXXXXXX
   XXXXXXXXXXXXXXXXXXX
  XXXXXXXXXXXXXXXXXXXXX
 XXXXXXXXXXXXXXXXXXXXXXX
XXXXXXXXXXXXXXXXXXXXXXXXX
 XXXXXXXXXXXXXXXXXXXXXXX
  XXXXXXXXXXXXXXXXXXXXX
   XXXXXXXXXXXXXXXXXXX
    XXXXXXXXXXXXXXXXX
     XXXXXXXXXXXXXXX
      XXXXXXXXXXXXX
       XXXXXXXXXXX
        XXXXXXXXX
         XXXXXXX
          XXXXX
           XXX
            X
*/

int main(){
    const char equis = 'X';
    const char espacio = ' ';

    int n = 0;

    cout << "Ingrese un entero positivo (>0): ";
    cin >> n;

    while(n <= 0){
        cout << "Dato no válido, pruebe de nuevo: ";
        cin >> n;
    }

    //Pirámide superior

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n - i; ++j)
            cout << espacio;
        for(int j = 1; j <= (i*2)-1; ++j)
            cout << equis;
        cout << endl;
    }

    //Pirámide inferior

    for(int i = n-1; i >= 1; --i){ //Hacemos n-1 para que esta pirámide sea una fila más pequeña que la anterior (le damos el aspecto de rombo)
        for(int j = 1; j <= n - i; ++j)
            cout << espacio;
        for(int j = 1; j <= (i*2)-1; ++j)
            cout << equis;
        cout << endl;
    }
}