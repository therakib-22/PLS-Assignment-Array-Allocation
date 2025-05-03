
// Heap-Dynamic Array in C++ with Resizing
#include <iostream>
using namespace std;

int main() {
    int size = 2;
    int* arr = new int[size];

    // Fill initial array
    arr[0] = 1;
    arr[1] = 2;

    // Resize array
    int newSize = 4;
    int* newArr = new int[newSize];

    for (int i = 0; i < size; i++)
        newArr[i] = arr[i];
    
    delete[] arr; // Free old memory
    arr = newArr;
    arr[2] = 3;
    arr[3] = 4;

    for (int i = 0; i < newSize; i++)
        cout << arr[i] << " ";

    delete[] arr;
    return 0;
}
