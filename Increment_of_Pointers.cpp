#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;

    float b = 9.4;
    float *fptr = &b;

    char c = 's';
    char *cptr = &c;

    bool d = 1;
    bool *dptr = &d;

    cout << "For integer" << endl;
    cout << "Before increment ";
    cout << ptr << endl;
    ptr++;
    cout << "After increment ";
    cout << ptr << endl << endl;

    cout << "For float" << endl;
    cout << "Before increment ";
    cout << fptr << endl;
    fptr++;
    cout << "After increment ";
    cout << fptr << endl << endl;

    cout << "For boolean" << endl;
    cout << "Before increment ";
    cout << dptr << endl;
    dptr++;
    cout << "After increment ";
    cout << dptr << endl << endl;

    cout << "For character" << endl;
    cout << "Before increment ";
    cout << cptr;
    cptr++;
    cout << "After increment ";
    cout << cptr;
    
    return 0;
}

// OUTPUT
// For integer
// Before increment 0x261fe6c
// After increment 0x261fe70

// For float
// Before increment 0x261fe68
// After increment 0x261fe6c

// For boolean
// Before increment 0x261fe66
// After increment 0x261fe67

// For character
// Before increment sffA
// After increment ffA