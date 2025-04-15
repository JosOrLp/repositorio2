#include <iostream>

using namespace std;
/**
* Una duncion es recursiva cuadno se llama a si misma.
*Factorial
*       n! = n * (n - 1)!
        (n-1)! = (n-1) * (n-2)!
        ...
        2! = 2 * 1!
        1! = 1
*/
int factorial(int n){
    /**CASO BASE**/
    if (n == 1){
        return 1;
    } else {
        return n * factorial (n-1); /** PASO RECURSIVO */

    }


    }
int main()
{
    cout << factorial(5) << endl;
    return 0;
}
