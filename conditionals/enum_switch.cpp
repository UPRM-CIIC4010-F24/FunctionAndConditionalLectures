#include <iostream>
using namespace std;

// Enum with default values (0, 1, 2, ...)
enum Day { Monday, Tuesday, Wednesday, Thursday, Friday };

int main() {
    Day today = Wednesday;

    switch (today) {
        case Monday:
            cout << "It's Monday." << endl;
            break;
        case Tuesday:
            cout << "It's Tuesday." << endl;
            break;
        case Wednesday:
            cout << "It's Wednesday." << endl;
            break;
        case Thursday:
            cout << "It's Thursday." << endl;
            break;
        case Friday:
            cout << "It's Friday." << endl;
            break;
        default:
            cout << "Invalid day." << endl;
    }

    return 0;
}