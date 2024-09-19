#include <iostream>
using namespace std;

int main() {
    int score = 3;
    int passed = 0;

    // if/else if/else statement
    if (score >= 90) {
        cout << "Grade: A" << endl;
        passed = 1;
    } else if (score >= 80) {
        cout << "Grade: B" << endl;
        passed = 1;
    } else if (score >= 70) {
        cout << "Grade: C" << endl;
        passed = 2;
    } else if (score >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    if(!passed)
        cout<< "YOU FAILED!!!" << endl;

    return 0;
}