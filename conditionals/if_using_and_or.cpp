#include <iostream>
using namespace std;

int main() {
    int age = 20;
    bool hasPermission = true;

    if (age >= 18 && hasPermission) {
        cout << "You are allowed to enter." << endl;
    } else if (age >= 18 && !hasPermission) {
        cout << "You need permission to enter." << endl;
    } else {
        cout << "You are too young to enter." << endl;
    }

    return 0;
}