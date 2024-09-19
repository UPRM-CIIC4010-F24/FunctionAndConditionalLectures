#include <iostream>
using namespace std;

int main() {
    bool A = true, B = false;

    // Double negation: !!A is equivalent to A
    cout << "Double Negation: !!A is equivalent to A" << endl;
    cout << "A = " << A << ", !!A = " << !!A << endl;

    // De Morgan's Laws: !(A || B) is equivalent to !A && !B
    cout << "\nDe Morgan's Law 1: !(A || B) is equivalent to (!A && !B)" << endl;
    cout << "!(A || B) = " << !(A || B) << ", (!A && !B) = " << (!A && !B) << endl;

    // De Morgan's Laws: !(A && B) is equivalent to !A || !B
    cout << "\nDe Morgan's Law 2: !(A && B) is equivalent to (!A || !B)" << endl;
    cout << "!(A && B) = " << !(A && B) << ", (!A || !B) = " << (!A || !B) << endl;

    // Idempotent Laws: A && A is equivalent to A, and A || A is equivalent to A
    cout << "\nIdempotent Law: A && A is equivalent to A, and A || A is equivalent to A" << endl;
    cout << "A && A = " << (A && A) << ", A || A = " << (A || A) << endl;

    // Distributive Law: A && (B || C) is equivalent to (A && B) || (A && C)
    bool C = true;
    cout << "\nDistributive Law: A && (B || C) is equivalent to (A && B) || (A && C)" << endl;
    cout << "A && (B || C) = " << (A && (B || C)) << ", (A && B) || (A && C) = " << ((A && B) || (A && C)) << endl;

    return 0;
}