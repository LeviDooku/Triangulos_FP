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

int main() {
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

    for(int i = 0; i <= n; ++i)
        cout << asterisco;

    cout << endl;
    
    for(int i = 1;  i <= n; ++i){
        for(int j = 1; j <= n - i; ++j)
            cout << guion;
        cout << asterisco;
        for(int j = 1; j <= i; ++j){
            if(i%2 != 0)
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

    for(int i = 0; i <= n; ++i)
        cout << asterisco;

    cout << endl << "La figura tiene una altura de: " << n;
}