/////////////////////////////
//Pedro Velasco Santana,   //
//2D - Ing. Infor. UGR     //
//File: ejemplo6.cpp       //
/////////////////////////////

//g++ -o prueba ejemplo5.cpp; ./prueba

#include <iostream>

using namespace std;

/*
                       *  zelda? xd
                      ***
                     *****
                    *******
                   *********
                  ***********
                 *************
                ***************
               *****************
              *******************
             *********************
            ***********************
           *                       *
          ***                     ***
         *****                   *****
        *******                 *******
       *********               *********
      ***********             ***********
     *************           *************
    ***************         ***************
   *****************       *****************
  *******************     *******************
 *********************   *********************
*********************** ***********************
*/

int main(){
    const char asterisco = '*';
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
        for(int j = 1; j <= (n*2) -i; ++j) //Imprimimos el doble de espacios
            cout << espacio;
        for(int j = 1; j <= i*2 -1; ++j)
            cout << asterisco;
        cout << endl;
    }

    //Pirámide derecha e izquierda

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n - i; ++j)
            cout << espacio;
        for(int j = 1; j <= i*2 -1; ++j)
            cout << asterisco;
        for(int j = 1; j <= (n-i)*2; ++j) //De nuevo, controlamos la impresión de espacios
            cout << espacio;
        for(int j = 1; j <= i*2 -1; ++j)
            cout << asterisco;
        cout << endl;
    }



}