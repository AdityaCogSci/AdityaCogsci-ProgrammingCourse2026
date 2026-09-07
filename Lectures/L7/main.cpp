
///////main program 1: kinetic//////

#include <iostream>
#include "kinetic.h"
// #include "kinetic.cpp"
using namespace std;

int main() {
    double m = 2.5, v = 10.0;   // mass in kg, velocity in m/s
    cout << "KE = " << kineticEnergy(m, v) << " J" << endl;
    return 0;
}


///////main program 2: temperature//////

#include <iostream>
#include "temp_convert.h"
// #include "temp_convert.cpp"
using namespace std;

int main() {
    double bodyTemp = 37.0;   // Celsius
    cout << bodyTemp << " C = " << celsiusToFahrenheit(bodyTemp) << " F" << endl;
    return 0;
}


// g++ -c kinetic.cpp -o kinetic.o //here you create the object file of the function file
// g++ -c main.cpp -o main.o // here you create the object file of the main file
// g++ kinetic.o main.o -o kinetic_calc.o/kinetic_calc // here you use both the files to create an object file 
//        // or an executable file, doesnt matters, order doesnt matters, it all works
// ./kinetic_calc.o/kinetic_calc // now run the executable file, it works no matter the extention, .o or none
