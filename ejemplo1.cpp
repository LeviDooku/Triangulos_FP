/////////////////////////////
//Pedro Velasco Santana,   //
//2D - Ing. Infor. UGR     //
//File: ejemplo1.cpp       //
/////////////////////////////

//g++ -o prueba ejemplo1.cpp; ./prueba

#include <iostream>

using namespace std;

int main() {
    const char a_imprimir = '+'; //Las hacemos constantes porque no se modificarán a lo largo de la ejecución
    const char espacio = ' ';
    int n = 0;

    cout << "Ingrese una altura (>0): "; 
    cin >> n;

    //Filtro para la entrada de datos

    while(n <= 0){
        cout << endl << "La altura debe ser >0, pruebe de nuevo: ";
        cin >> n;
    }

    cout << "Primer triángulo: " << endl;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n - i; ++j) //Imprime espacios desde n hasta 0
            cout << espacio;
        for(int j = 1; j <= i; ++j) //Imprime caracteres desde 1 hasta n
            cout << a_imprimir;
        cout << endl;
    }

    cout << "Segundo triángulo: " << endl;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= i; ++j) //Imprime caracteres desde 1 hasta n
            cout << a_imprimir;
        cout << endl;
    }

    cout << "Tercer triángulo: " << endl;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= i; ++j) //Imprime espacios desde 0 hasta n
            cout << espacio;
        for(int j = 1; j <= (n+1) - i; ++j) //Imprime desde n+1 hasta 1
            cout << a_imprimir;
        cout << endl;
    }

    cout << "Cuarto triángulo: " << endl;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= (n+1) - i; ++j) //Imprime desde n+1 hasta 1
            cout << a_imprimir;
        cout << endl;
    }

    cout << "Quinto triángulo: " << endl; //Pirámide

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n - i; ++j) //Imprime espacios (por ahora = que 1er triangulo)
            cout << espacio;
        for(int j = 1; j <= i*2 - 1; ++j) //Imprimimos el doble de caracteres que la altura (-1 es para que acabe en pico)
            cout << a_imprimir;
        cout << endl;
    }

    cout << "Sexto triángulo: " << endl; //Pirámide invertida

    for(int i = n; i >= 1; --i){ //Simplemente invertimos el orden de impresión
        for(int j = 1; j <= n - i; ++j)
            cout << espacio;
        for(int j = 1; j <= i*2 - 1; ++j)
            cout << a_imprimir;
        cout << endl;
    }

    cout << "Séptimo triángulo: " << endl; //Pirámide de números

    int num_impr = 1; //Empezamos desde el 1

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n - i; ++j)
            cout << espacio;
        for(int j = 1; j <= i*2 - 1; ++j){
            cout << num_impr;
            num_impr++; //Acumulamos el número para seguir la secuencia
            if(num_impr > 9) //Controlamos que no se pase de 9
                num_impr = 0;
        }
        cout << endl;
    }

    cout << "Octavo triángulo: " << endl; //Pirámide de números invertida

    num_impr = 9; //Empezamos desde el 9 (decreciente)

    for(int i = n; i >= 1; --i){
        for(int j = 1; j <= n - i; ++j) 
            cout << espacio;
        for(int j = 1; j <= i*2 - 1; ++j){
            cout << num_impr;
            num_impr--;
            if(num_impr == 0)
                num_impr = 9;
        }
        cout << endl;
    }

    cout << "Noveno triángulo: " << endl; //Pirámide de números (cada fila, un número)

    num_impr = 1;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n - i; ++j)
            cout << espacio;
        for(int j = 1; j <= i*2 - 1; ++j)
            cout << num_impr;
        num_impr++; //Simplemente pasamos la estructura de actualización y control afuera del bucle, para que haga 1 por fila
        if(num_impr > 9)
            num_impr = 0;
        cout << endl;
    }

    cout << "Décimo triángulo: " << endl; //Pirámide de letras

    char letra_impr = 'a'; //Empezamos por la a

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n - i; ++j)
            cout << espacio;
        for(int j = 1; j <= i*2 - 1; ++j){
            cout << letra_impr;
            letra_impr++;
            if (letra_impr > 'z')
                letra_impr = 'a';
        }
        cout << endl;
    }


}