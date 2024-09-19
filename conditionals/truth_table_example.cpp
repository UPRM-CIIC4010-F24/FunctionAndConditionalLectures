#include <iostream>
using namespace std;

int main() {
    // Heading of the truth table
    cout << "A\tB\tA AND B\tA OR B\tNOT A" << endl;
    // cout << boolalpha;
    // Truth table for all combinations of A and B (0 for false, 1 for true)
    
    bool A = false, B = false;
    cout << A << "\t" << B << "\t" << (A && B) << "\t" << (A || B) << "\t" << (!A) << endl;
    
    A = false, B = true;
    cout << A << "\t" << B << "\t" << (A && B) << "\t" << (A || B) << "\t" << (!A) << endl;
    
    A = true, B = false;
    cout << A << "\t" << B << "\t" << (A && B) << "\t" << (A || B) << "\t" << (!A) << endl;
    
    A = true, B = true;
    cout << A << "\t" << B << "\t" << (A && B) << "\t" << (A || B) << "\t" << (!A) << endl;
    
    return 0;
}