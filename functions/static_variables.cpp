#include <iostream>
using namespace std;

void countFunctionCalls() {
    static int counter = 0;  // Static variable, persists across function calls
    counter++;
    cout << "This function has been called " << counter << " times." << endl;
}

int main() {
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();  // The static variable retains its value across calls
    return 0;
}