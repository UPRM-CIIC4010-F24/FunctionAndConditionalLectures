#include <iostream>
using namespace std;

// Overloaded functions with different parameters
int operate(int a, int b) {
    return a + b;
}

// Same function name, different number of arguments
double operate(double a, double b) {
    return a * b;
}

// Same function name, different parameter types
string operate(string a, string b) {
    return a + b;
}

int main() {
    cout << "Addition of integers: " << operate(5, 3) << endl;             // Calls int version
    cout << "Multiplication of doubles: " << operate(2.5, 4.0) << endl;    // Calls double version
    cout << "Concatenation of strings: " << operate("Hello, ", "world!") << endl; // Calls string version
    return 0;
}