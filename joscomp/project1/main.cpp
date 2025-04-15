#include <iostream>

using namespace std;

int power (int base, int exp){
    int result = 1;
    for (int i = 0; i < exp; i++){
        result *= base;
    return 0;
    }
    }

void imprimirParImpar(int num) //si no regresa nada void
{
    if(num % 2 == 0) {
        cout << "es par" << endl;
    }else {
        cout << "es impar" << endl;
    }
}

int main()
{
    cout << power(3, 4) << endl;
    imprimirParImpar(5);
    imprimirParImpar(8);
}
    return 0;
}

