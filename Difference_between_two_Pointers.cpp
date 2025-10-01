#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    
    int* ptr1 = &arr[4];  
    int* ptr2 = &arr[1];  

    int diff = *ptr1 - *ptr2;

    cout << "Pointer 1 address: " << ptr1 << endl;
    cout << "Pointer 2 address: " << ptr2 << endl;
    cout << "Difference: " << diff << endl;

    return 0;
}

// OUTPUT
// Pointer 1 address: 0x261fe70
// Pointer 2 address: 0x261fe64
// Difference: 30
