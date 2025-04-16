#include <iostream>

using namespace std;

/**
* Conjunto de elementos del mismo tipo de dato
* almacenados en memoria de forma consecutiva
*/

int main()
{
    int arreglo[6] = {0 , 2 , 3 , 4, 5, 7};

    for (int i = 0; i < 6; i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;

    for (int i = 5; i >= 0; i-- ){
        cout << arreglo[i] << " ";
    }
    cout << endl;

    string cad = "ciencia";
    for (int i = 0; i < cad.length(); i++ ){
        cout << cad[i] << " ";
    }
    cout << endl;

    return 0;
}
