#include <iostream>

using namespace std;

/*
Realizar un programa que lea desde el teclado un numero entero n mayor que 2 y muestre por
pantalla la siguiente figura (en el ejemplo, n=12).
NOTA: Para imprimir por pantalla el carácter \ hay que emplear cout << '\\';

\abcdefghijklmnopqrstuv/
 \wxyzabcdefghijklmnop/
  \qrstuvwxyzabcdefgh/
   \ijklmnopqrstuvwx/
    \yzabcdefghijkl/
     \mnopqrstuvwx/
      \yzabcdefgh/
       \ijklmnop/
        \qrstuv/
         \wxyz/
          \ab/
           \/
           **
           **
           **
           **
           **
           **
           **
           **
           **
           **
           **
           **
*/

int main(){

    const char b_invertida = '\\';
    const char b_normal = '/';
    const char asterisco = '*';
    const char espacio = ' ';
    char letra = 'a';

    int n = 0;

    cout << "Ingrese un entero positivo (>0): ";
    cin >> n;

    while(n <= 0){
        cout << "Dato no válido, pruebe de nuevo: ";
        cin >> n;
    }

    for(int i = n; i >= 1; --i){
        for(int j = 1; j <= n - i; ++j)
            cout << espacio;
        cout << b_invertida;
        for(int j = 1; j <= i*2; ++j){
            cout << letra;
            letra++;
            if(letra == 'z')
                letra = 'a';
        }
        cout << b_normal;
        cout << endl;
    }
    
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j)
            cout << espacio;
        cout << asterisco << asterisco;
        cout << endl;
    }



    
}