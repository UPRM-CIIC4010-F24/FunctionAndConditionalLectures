#include <iostream>
using namespace std;

int main() {
    char char1 = 'A';
    char char2 = 'B';

    if (char1 < char2) {
        cout << "Character " << char1 << " is less than " << char2 << endl;
    } else {
        cout << "Character " << char1 << " is greater than or equal to " << char2 << endl;
    }

    string str1 = "apple";
    string str2 = "banana";

    if (str1 < str2) {
        cout << "String \"" << str1 << "\" is less than \"" << str2 << "\"" << endl;
    } else {
        cout << "String \"" << str1 << "\" is greater than or equal to \"" << str2 << "\"" << endl;
    }

    return 0;
}