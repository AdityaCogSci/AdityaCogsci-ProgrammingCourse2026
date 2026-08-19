// ============================================================
// L1 - Introduction to Programming
// Topic : Data Types -- truncation / type mismatch
// Language : C++
// ============================================================
#include <iostream>
using namespace std;

int main() {
    // --- Assigning a decimal value to an int ---
    int count = 7.9;          // decimal part is silently dropped

    cout << "count = 7.9 -> stored as: " << count << endl;

    // --- Assigning an int to a double (always safe) ---
    double ratio = 5;         // whole number becomes 5.0
    cout << "ratio = 5 -> stored as: " << ratio << endl;

    // --- A more realistic physics example ---
    double measured_value = 9.81;   // acceleration due to gravity, m/s^2
    int rounded_value = measured_value;   // truncates to 9, not rounds!
    cout << "measured_value = " << measured_value << endl;
    cout << "rounded_value = " << rounded_value << endl;
    cout << "NOTE: This is TRUNCATION, not rounding!" << endl;

    return 0;
}

