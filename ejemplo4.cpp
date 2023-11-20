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

    cout << "Ingrese un entero positivo (>0): ";
    cin >> n;

    while(n <= 0){
        cout << "Dato no válido, pruebe de nuevo: ";
        cin >> n;
    }

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