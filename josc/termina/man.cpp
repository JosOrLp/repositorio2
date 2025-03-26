#include <iostream>

using namespace std;

int main()
{   /**
    char num1; /// 1
    char num2; /// 3

     * ingrese el primer numero
     * condicion if static cast

    cout << "ingrese un numero: "<< endl;
    cin >> num1
    cout << "ingrese otro numero: "<< endl;
    cin >> num2
    int valNum1 = static_cast<int>(num1);
    int valNum2 = static_cast<int>(num2);
    if ((valNum1 >= 48 && valNum1 <= 57)&&(valNum1 >= 48 && valNum1 <= 57)) {
        cout << "la suma es: " << ((valNum1-48) + (valBun2 - 48)) << endl;
    }
    else
    {
        cout << "solo se permiten numeros" << endl ;
    }
    */
    cout << 'A' << endl; //imprime caracter a
    cout << "A" << endl; // imprime la cadena (string) que


    string name;
    int age;
    cout << "ingresa tu nombre: ";
    cin >> name ;
    cout << "ingresa tu edad: ";
    cin >> age;
    cout << "Habla causa " << name << "que novedad!!" << endl;
    cout << "Tu tienes " << age << "años!!!  :3" << endl;

    return 0;
}
