#include <iostream>
using namespace std;

int main() {
    int x = 10;

    if (x > 5) {
        int y = 20;  // y is declared inside the if-block
        cout << "x is greater than 5, y = " << y << endl;
    }

    // cout << y;  // This would cause an error, as y is out of scope here

    if (x < 5) {
        int z = 30;  // z is only available within this block
        cout << "x is less than 5, z = " << z << endl;
        // int x = 5; // Causes an error
    } else {
        int z = 40;  // Different z scoped in the else-block
        cout << "x is greater or equal to 5, z = " << z << endl;
    }

    return 0;
}