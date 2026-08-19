// ============================================================
// L1 - Introduction to Programming
// Topic : void -- preview before Functions unit
// Language : C++
// ============================================================
#include <iostream>
using namespace std;

// A function that returns nothing (void) and takes no input
void print_header() {
    cout << "==================================" << endl;
    cout << "   Physics Lab Data Report" << endl;
    cout << "==================================" << endl;
    // no 'return' with a value is needed here
}

int main() {
    print_header();   // calling the void function

    cout << "Trial 1: Temperature = 300.5 K" << endl;
    cout << "Trial 2: Temperature = 301.2 K" << endl;

    return 0;
}
// ============================================================
// NOTE: We are previewing 'void' here only to close the data-types
// discussion. Full function syntax (parameters, return types,
// multiple functions) is covered later under 'Functions/Subroutines'.
// ============================================================
