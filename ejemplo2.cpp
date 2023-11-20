/////////////////////////////
//Pedro Velasco Santana,   //
//2D - Ing. Infor. UGR     //
//File: ejemplo2.cpp       //
/////////////////////////////

//g++ -o prueba ejemplo2.cpp; ./prueba

#include <iostream>

using namespace std;

/* Realizar un programa que lea desde el teclado un numero entero n mayor que 5 y muestre
por
pantalla la siguiente figura (en el ejemplo, n=17).
*****************
---------------*+
--------------*ab
-------------*+++
------------*cdef
-----------*+++++
----------*ghijkl
---------*+++++++
--------*mnopqrst
-------*+++++++++
------*uvwxyzabcd
-----*+++++++++++
----*efghijklmnop
---*+++++++++++++
--*qrstuvwxyzabcd
-*+++++++++++++++
*****************
*/

int main(){

    const char guion = '-';
    const char asterisco = '*';
    const char suma = '+';
    char letra = 'a';

    int n = 0;

    cout << "Ingrese un entero positivo (>0): ";
    cin >> n;

    while(n <= 0){
        cout << "Dato no válido, pruebe de nuevo: ";
        cin >> n;
    }

    //Primera fila de asteriscos
    for(int i = 0; i <= n; ++i)
        cout << asterisco;

    cout << endl;
    
    for(int i = 1;  i <= n; ++i){
        for(int j = 1; j <= n - i; ++j) //Imprimimos los guiones
            cout << guion;
        cout << asterisco; //Así hacemos la diagonal de asteriscos
        for(int j = 1; j <= i; ++j){ //Impresión de las filas
            if(i%2 != 0) //Si la fila es impar se imprime '+', si no, las letras
                cout << suma;
            else{
                cout << letra;
                letra++;
                if(letra > 'z')
                    letra = 'a';
            }
        }
        cout << endl;
    }

    //Fila inferior de asteriscos
    for(int i = 0; i <= n; ++i)
        cout << asterisco;
}