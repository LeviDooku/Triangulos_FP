/////////////////////////////
//Pedro Velasco Santana,   //
//2D - Ing. Infor. UGR     //
//File: ejemplo4.cpp       //
/////////////////////////////

//g++ -o prueba ejemplo4.cpp; ./prueba

#include <iostream>

using namespace std;

/*
Realizar un programa que lea desde el teclado un numero entero n mayor que 5 y muestre por
pantalla la siguiente figura (en el ejemplo, n=10).
X..................XX++++++++++++++++++X
*X................X**X++++++++++++++++X*
**X..............X****X++++++++++++++X**
***X............X******X++++++++++++X***
****X..........X********X++++++++++X****
*****X........X**********X++++++++X*****
******X......X************X++++++X******
*******X....X**************X++++X*******
********X..X****************X++X********
*********XX******************XX*********
*/

int main(){
    const char equis = 'X';
    const char asterisco = '*';
    const char suma = '+';

    int n = 0;

    cout << "Ingrese un entero positivo (>5): ";
    cin >> n;

    while(n <= 5){
        cout << "Dato no válido, pruebe de nuevo: ";
        cin >> n;
    }

    //Básicamente es ir concatenando triángulos con los caracteres especificados

    for(int i = 1; i <= n; ++i){

        for(int j = 1; j <= i; ++j)
            cout << asterisco;
        cout << equis;
        for(int j = 1; j <= n - i; ++j)
            cout << "·";

        for(int j = 1; j <= n - i; ++j)
            cout << "·";
        cout << equis;
        for(int j = 1; j <= i; ++j)
            cout << asterisco;
        
        for(int j = 1; j <= i; ++j)
            cout << asterisco;
        cout << equis;
        for(int j = 1; j <= n - i; ++j)
            cout << suma;

        for(int j = 1; j <= n - i; ++j)
            cout << suma;
        cout << equis;
        for(int j = 1; j <= i; ++j)
            cout << asterisco;
        
        cout << endl;

    }

}