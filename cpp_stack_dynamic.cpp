
// Stack-Dynamic Array in C++
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[size]; // Variable length array (VLA) - allowed in some compilers

    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
        cout << arr[i] << " ";
    }
    return 0;
}
