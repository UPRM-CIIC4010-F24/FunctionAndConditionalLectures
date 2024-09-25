#include <iostream>
using namespace std;

// Enum with overridden values
enum Severity { Low = 1, Medium = 5, High = 10 };

int main() {
    Severity level = Medium;

    switch (level) {
        case Low:
            cout << "Low severity: Take basic precautions." << endl;
            break;
        case Medium:
            cout << "Medium severity: Be cautious." << endl;
            break;
        case High:
            cout << "High severity: Take immediate action!" << endl;
            break;
        default:
            cout << "Unknown severity level." << endl;
    }

    return 0;
}