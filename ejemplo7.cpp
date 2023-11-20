/////////////////////////////
//Pedro Velasco Santana,   //
//2D - Ing. Infor. UGR     //
//File: ejemplo7.cpp       //
/////////////////////////////

//g++ -o prueba ejemplo7.cpp; ./prueba

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


/*
NOTA:

Me suena que había una modificación de este ejercicio que pedía el ingreso de un impar como altura y lograr
que la figura fuera altura/2, altura%2 (asterisco central en el centro), altura/2

Esto se puede lograr controlando el número de iteraciones en el bucle más exterior de cada parte de la figura
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
        cout << asterisco; //Diagonal de asteriscos
        for(int j = 1; j <= n - i; ++j) 
            cout << espacio;
        cout << asterisco; //Línea central de asteriscos
        for(int j = 1; j <= n - i; ++j)
            cout << espacio;
        cout << asterisco;
        cout << endl;
    }

    for(int i = 0; i < n; ++i)
        cout << espacio;
    cout << asterisco << endl;

    //Parte inferior (Misma dinámica que lo anterior)

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