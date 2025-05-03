
// Fixed Heap-Dynamic Array in C++
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;

    int* arr = new int[size]; // Allocated on heap

    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
        cout << arr[i] << " ";
    }

    delete[] arr; // Free heap memory
    return 0;
}
