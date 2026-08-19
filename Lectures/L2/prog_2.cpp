// ============================================================
// L1 - Introduction to Programming
// Topic : Data Types -- sizeof() demonstration
// Language : C++
// ============================================================
#include <iostream>
using namespace std;

int main() {
    // --- Declaring one variable of each basic type ---
    int trial_number   = 12;
    float mass          = 9.11e-31;    // electron mass, kg
    double energy        = 6.626e-34;   // Planck's constant, J.s
    char grade           = 'A';
    bool is_stable        = true;

    // --- Printing values ---
    cout << "trial_number = " << trial_number << endl; 
    cout << "float mass = " << mass << endl;
    cout << "double energy = " << energy << endl;
    cout << "char grade = " << grade << endl;
    cout << "bool is_stable = " << is_stable << endl;   // prints 1, not "true"

    cout << "------------------------------" << endl;

    // --- Printing storage size (in bytes) of each type ---
    cout << "Size of int    : " << sizeof(int)    << " bytes" << endl;
    cout << "Size of float  : " << sizeof(float)  << " bytes" << endl;
    cout << "Size of double : " << sizeof(double) << " bytes" << endl;
    cout << "Size of char   : " << sizeof(char)   << " bytes" << endl;
    cout << "Size of bool   : " << sizeof(bool)   << " bytes" << endl;

    return 0;
}
// ============================================================
// NOTE: bool prints as 1 (true) or 0 (false), not the word itself.
// ============================================================
