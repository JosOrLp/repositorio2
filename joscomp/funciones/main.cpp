#include <iostream>

using namespace std;
/** arreglos, es una coleccionde objetos, es una estuctura de datos basica en c++
un arreglo, puede tener una capasidad, elementos de 1 solo tipo,
arreglo de 6 elementos
| 0 | 2 | 3 | 4 | 5 | 6 |
int arreglo [6];
arreglo[0] = 10*/
int main()
{
    int arreglo[6];
    arreglo[0] = 10;
    arreglo[1] = 1;
    arreglo[2] = 5;
    arreglo[3] = 8;
    arreglo[4] = 6;
    arreglo[5] = 18;

    char yum[] = "arreglo";
    string cadena = "ciencia";

    for (int i = 0; i < cadena.length() ; i++){
        cout << cadena [i] << " ";

    }
    cout << endl;
    return 0;
}
