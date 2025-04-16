#include <iostream>

using namespace std;
/**
dado un arreglo de enteros ordenar dicho
arreglo usando el algoritmo bubblesort*/
void printArray(int arr[], int size){
    cout << "[";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "]" << endl << endl;
}
void bubblesort(int arr[], int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size-i-1; j++){
                if (arr[j])
            int tmp = arr [j];
            arr[j] = arr[j+i];
            arr[j+1] = tmp;
        }
    }
    }

int main()
{
    int arr[] = {5,3,2,8,7,1,4,6};
    int size = sizeof(arr) / sizeof (arr[0]);
    //bubblesort
    bubblesort(arr, size);

    printArray(arr, size);


}


