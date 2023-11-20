#include <iostream>

using namespace std;

/*
*****        *****
 ****        ****
  ***        ***
   **        **
    *        *
    **********o
    *        *oo
    *        *ooo
    *        *oooo
    *        *ooooo
    *        *oooooo
    *        *ooooooo
    *        *oooooooo
    *        *ooooooooo
    **********oooooooooo
           ***
          *****
         *******
        *********
       ***********
      *************
     ***************
    *****************
   *******************
  ********************* */

 int main() {
    const char asterisco = '*';
    const char mayus_O = 'O';
    const char espacio = ' ';

    int n = 0;

    cout << "Ingrese un entero positivo (>3): ";
    cin >> n;

    while(n <= 3){
        cout << "Dato no válido, pruebe de nuevo: ";
        cin >> n;
    }

    //Triángulos superiores

    for(int i = 1; i <= n/2; ++i){
        for(int j = 1; j < i; ++j)
            cout << espacio;
        for(int j = 0; j <= n/2 -i; ++j)
            cout << asterisco;
        for(int j = 0; j < n -3; ++j)
            cout << espacio;
        for(int j = 0; j <= n/2 -i; ++j)
            cout << asterisco;
        cout << endl;
    }

    //Cuadrado + triángulo inferior

    for(int i = 1; i <= n/2 - 1; i++)
        cout << espacio;
    for(int j = 1; j <= n -1; ++j)
        cout << asterisco;
    cout << mayus_O;
    cout << endl;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n/2 - 1; ++j)
            cout << espacio;
        cout << asterisco;
        for(int j = 1; j <= n -3; ++j)
            cout << espacio;
        cout << asterisco;
        for(int j = 0; j <= i; ++j)
            cout << mayus_O;
        cout << endl;
    }

    for(int i = 1; i <= n/2 - 1; i++)
        cout << espacio;
    for(int j = 1; j <= n -1; ++j)
        cout << asterisco;
    for(int j = 1; j <= n +2; ++j)
        cout << mayus_O; 
    cout << endl;
 
    //Figura inferior

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n+1 -i; ++j)
            cout << espacio;
        for(int j = 1; j <= i; ++j)
            cout << asterisco;
        cout << asterisco;
        for(int j = 1; j <= i; ++j)
            cout << asterisco;
        cout << endl;
    }
 
 }