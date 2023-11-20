#include <iostream>

using namespace std;

/*
*           *           *
 *          *          *
  *         *         *
   *        *        *
    *       *       *
     *      *      *
      *     *     *
       *    *    *
        *   *   *
         *  *  *
          * * *
           ***
            *
           ***
          * * *
         *  *  *
        *   *   *
       *    *    *
      *     *     *
     *      *      *
    *       *       *
   *        *        *
  *         *         *
 *          *          *
*           *           *
*/

int main() {

    const char asterisco = '*';
    const char espacio = ' ';

    int n = 0;

    cout << "Ingrese un entero positivo (>0): ";
    cin >> n;

    while(n <= 0){
        cout << "Dato no válido, pruebe de nuevo: ";
        cin >> n;
    }

    //Parte superior

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j < i; ++j)
            cout << espacio;
        cout << asterisco;
        for(int j = 1; j <= n - i; ++j)
            cout << espacio;
        cout << asterisco;
        for(int j = 1; j <= n - i; ++j)
            cout << espacio;
        cout << asterisco;
        cout << endl;
    }

    for(int i = 0; i < n; ++i)
        cout << espacio;
    cout << asterisco << endl;

    //Parte inferior

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n - i; ++j)
            cout << espacio;
        cout << asterisco;
        for(int j = 1; j < i; ++j)
            cout << espacio;
        cout << asterisco;
        for(int j = 1; j < i; ++j)
            cout << espacio;
        cout << asterisco;
        cout << endl;
    }

}