#include <iostream>
using namespace std;

// Function with default parameters
void displayMessage(string message = "Hello, World!", int repeat = 1) {
    for (int i = 0; i < repeat; i++) {
        cout << message << endl;
    }
}

int main() {
    displayMessage();                    // Uses both default parameters
    displayMessage("Welcome!");          // Uses default value for repeat
    displayMessage("Hi!", 3);            // No default values used
    displayMessage("", 3);
    return 0;
}