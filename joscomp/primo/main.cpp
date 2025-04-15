#include <iostream>

using namespace std;
bool esPrimo (int num){
    for(int i = 2; i< num; i ++){
        if (num % i == 0){
        return false;
        }
    }
    return true;

}
int main()
{
    int n;
    cout <<"ingrese un numero: ";
    cin >> n;
    for (int i = 2 ; i < n; i++){
        if (esPrimo (i)){
            cout << i << " ";
        }
    }
    //cout << esPrimo(19) << endl;
    return 0;
}
