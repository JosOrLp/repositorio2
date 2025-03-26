#include <iostream>

using namespace std;

int main()
{
     /**

     *el valor 0 significa falso
     *un valor diferente de 0 significa true


   int n(21);
   if ( ! (n & 2) )
   {
    cout << "es impar" << endl;
   }
   else
   {
    cout << "es impar" << endl;
   }
   return 0;
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

    string cadena = "Ciencia de la computacion";

    cout << cadena.at(0) << endl;
    cout << cadena.at(1) << endl;
    cout << cadena.at(2) << endl;
    cout << cadena.at(3) << endl;
    cout << cadena.at(4) << endl;
    cout << cadena.at(5) << endl;
    cout << cadena.at(6) << endl;
    cout << cadena.at(7) << endl;
    cout << cadena.at(8) << endl;
    cout << cadena.at(9) << endl;
    cout << cadena.at(10) << endl;
    cout << cadena.at(11) << endl;
    cout << cadena.at(12) << endl;
    cout << cadena.at(13) << endl;
    cout << cadena.at(14) << endl;
    cout << cadena.at(15) << endl;
    cout << cadena.at(16) << endl;
    cout << cadena.at(17) << endl;
    cout << cadena.at(18) << endl;
    cout << cadena.at(19) << endl;
    cout << cadena.at(20) << endl;
    cout << cadena.at(21) << endl;
    cout << cadena.at(22) << endl;
    cout << cadena.at(23) << endl;
    cout << cadena.at(24) << endl;
     */
    string fullname;
    cout << "Ingresa tu nombre porfa: ";
    //cin >> fullname;
    getline(cin, fullname);
    cout << "tu nombre es: " << fullname << endl;


    return 0;
}
