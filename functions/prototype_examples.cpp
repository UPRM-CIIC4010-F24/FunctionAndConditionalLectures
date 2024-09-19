#include <iostream>
using namespace std;

/* Function prototype before main
If not done before being called we would get an error. 

Comment them out and try to run the code to see what happens.
*/
void greet();                  // No parameters
void greet(string name);        // With parameters
int add(int, int);              // Parameters without names
int multiply(int a, int b);     // Parameters with names

// Main
int main() {
    greet();
    greet("Alice");
    cout << "Addition: " << add(5, 3) << endl;
    cout << "Multiplication: " << multiply(4, 5) << endl;
    return 0;
}

// Function definitions/implementations
void greet() {
    cout << "Hello!" << endl;
}

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int add(int x, int y) {
    return x + y;
}

int multiply(int a, int b) {
    return a * b;
}