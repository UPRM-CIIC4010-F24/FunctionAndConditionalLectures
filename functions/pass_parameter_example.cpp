#include <iostream>
using namespace std;

// Global variable
int globalVar = 10;

// Function using pass-by-value (local variable is a copy)
void passByValue(int a) {
    a = a * 2;
    cout << "Inside passByValue, a = " << a << endl;  // Changes inside the function do not affect the original variable
}

// Function using pass-by-reference
void passByReference(int &b) {
    b = b * 2;
    cout << "Inside passByReference, b = " << b << endl;  // Changes affect the original variable
}

// Function using const reference (read-only access)
void passByConstReference(const int &c) {
    // c = c * 2;  // This line would cause a compilation error because 'c' is read-only
    cout << "Inside passByConstReference, c = " << c << endl;  // We can access the variable but not modify it
}

int main() {
    int localVar = 5;  // Local variable in main function
    
    cout << "Before passByValue, localVar = " << localVar << endl;
    passByValue(localVar);  // Pass by value (localVar is unchanged)
    cout << "After passByValue, localVar = " << localVar << endl;
    
    cout << "Before passByReference, localVar = " << localVar << endl;
    passByReference(localVar);  // Pass by reference (localVar is modified)
    cout << "After passByReference, localVar = " << localVar << endl;
    
    cout << "Before passByConstReference, globalVar = " << globalVar << endl;
    passByConstReference(globalVar);  // Pass globalVar by const reference (no modification)
    cout << "After passByConstReference, globalVar = " << globalVar << endl;

    return 0;
}