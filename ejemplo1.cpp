#include <iostream>

using namespace std;

int main() {
    const char a_imprimir = '+';
    const char espacio = ' ';
    int n = 0;

    cout << "Ingrese una altura (>0): ";
    cin >> n;

    while(n <= 0){
        cout << endl << "La altura debe ser >0, pruebe de nuevo: ";
        cin >> n;
    }


    cout << "Primer triángulo: " << endl;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n - i; ++j)
            cout << espacio;
        for(int j = 1; j <= i; ++j)
            cout << a_imprimir;
        cout << endl;
    }

    cout << "Segundo triángulo: " << endl;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= i; ++j)
            cout << a_imprimir;
        cout << endl;
    }

    cout << "Tercer triángulo: " << endl;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= i; ++j)
            cout << espacio;
        for(int j = 1; j <= (n+1) - i; ++j)
            cout << a_imprimir;
        cout << endl;
    }

    cout << "Cuarto triángulo: " << endl;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= (n+1) - i; ++j)
            cout << a_imprimir;
        cout << endl;
    }

    cout << "Quinto triángulo: " << endl;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n - i; ++j)
            cout << espacio;
        for(int j = 1; j <= i*2 - 1; ++j)
            cout << a_imprimir;
        cout << endl;
    }

    cout << "Sexto triángulo: " << endl;

    for(int i = n; i >= 1; --i){
        for(int j = 1; j <= n - i; ++j)
            cout << espacio;
        for(int j = 1; j <= i*2 - 1; ++j)
            cout << a_imprimir;
        cout << endl;
    }

    cout << "Séptimo triángulo: " << endl;

    int num_impr = 1; //Será una pirámide de números

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n - i; ++j)
            cout << espacio;
        for(int j = 1; j <= i*2 - 1; ++j){
            cout << num_impr;
            num_impr++;
            if(num_impr > 9)
                num_impr = 0;
        }
        cout << endl;
    }

    cout << "Octavo triángulo: " << endl;

    num_impr = 9; //Será una pirámide de números

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

    cout << "Noveno triángulo: " << endl;

    num_impr = 1; //Será una pirámide de números

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n - i; ++j)
            cout << espacio;
        for(int j = 1; j <= i*2 - 1; ++j)
            cout << num_impr;
        num_impr++;
        if(num_impr > 9)
            num_impr = 0;
        cout << endl;
    }

    cout << "Décimo triángulo: " << endl;

    char letra_impr = 'a'; //Será una pirámide de números

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