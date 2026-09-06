/////////////////Particle's mass: Problem 1/////////////////////

// #include <iostream>
// using namespace std;

// int main()
// {
//     float mass, velocity;
//     std::cout << "Write down the values of mass and velocity" << endl;
//     std::cin >> mass >> velocity;
//     cout << "\nmomentum = " << mass*velocity << endl;
//     return 0;
// }

//////////////////Capacitance: Problem 2//////////////////////

// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     float capacitance = 0.000047;
//     cout << scientific << setprecision(3) << capacitance << endl;
//     return 0;
// }

//////////////////Table: Problem 3///////////////////////

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     double current1 = 5.2, current2 = 118.6, current3 = 27.05, current4 = 3.75;
//     cout << right << setw(10) << "Reading" << setw(12) << "Current(mA)" << endl;  // width set to 12 instead of 10 for Current(mA)because it was too close and didnt look good
//     cout << right << setw(10) << "1" << setw(12) << current1 << endl;
//     cout << right << setw(10) << "2" << setw(12) << current2 << endl;
//     cout << right << setw(10) << "3" << setw(12) << current3 << endl;
//     cout << right << setw(10) << "4" << setw(12) << current4 << endl;
//     return 0;

// }

/////////////////Pi: Problem 4//////////////////////

// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     float pi = 3.14159265;
//     cout << "pi = " << fixed << setprecision(5) << pi << endl;
//     return 0;
// }

/////////////////////Current: Problem 4//////////////////////

// #include <iostream> 
// using namespace std;

// int main()
// {
//     int v_low = 0, v_up = 230, a_low = 0, a_up = 10;

//     float v_given, a_given;
//     cout << "Give a value of voltage which is between 0 to 230 Volts, and Value of Current between 0 to 10 A: " << endl;
//     cin >> v_given >> a_given;
//     if (v_low <= v_given <= v_up and a_low <= a_given <= a_up)
//         cout << "Safe" << endl;
//     else
//         cout << "Unsafe" << endl;
//     return 0;
// }

///////////////////////Resistance: Problem 6//////////////////////

// #include <iostream>
// using namespace std;

// int main()
// {
//     float R1, R2, R3;

//     cout << "What's the values of the three resistance? R1, R2 and R3" << endl;
//     cin >> R1 >> R2 >> R3;
//     cout << "Average Resistance = " << (R1+R2+R3)/3 << endl;

//     return 0;
// }

///////////////////////Warning: Problem 7//////////////////

// #include <iostream>
// using namespace std;

// int main()
// {
//     float voltage;
//     cout << "Type in the value of Voltage: " << endl;
//     cin >> voltage;
    
//     if (voltage > 230)
//         cout << "WARNING: Overvoltage!" << endl;

//     return 0;
// }

//////////////////Earthquake: Problem 8//////////////////////

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     float earthquake;

//     cout << "Write down the value of Earthquake in Richter Scale: " << endl;
//     cin >> earthquake;
//     if (earthquake <4.0) {
//         cout << "Minor" << endl;
//     } else if (earthquake < 6.0) {
//         cout << "Moderate" << endl;
//     } else if (earthquake < 7.5) {
//         cout << "Major" << endl;
//     } else {
//         cout << "Great" << endl;
//     }
// }

///////////////////////Grades: Problem 9////////////////////

// #include <iostream>
// using namespace std;

// int main()
// {
//     char Grades;
    
//     cout << "What's your Grades? " << endl;
//     cin >> Grades;
//     if (Grades == 'A'){
//         cout << "Excellent" << endl;
//     } else if (Grades == 'B') {
//         cout << "Good" << endl;
//     } else if (Grades == 'C') {
//         cout << "Satisfactory" << endl;
//     } else if (Grades == 'D') {
//         cout << "Needs Improvement" << endl;
//     } else if (Grades == 'F') {
//         cout << "Fail" << endl;
//     } else {
//         cout << "INVALID GRADE" << endl;
//     }
//     return 0;
// }

//////////////////////Ion: Problem 10///////////////

// #include <iostream>
// using namespace std;

// int main()
// {
//     int charge;

//     cout << "Enter a particle's charge in integer and in units of elementary charge: " << endl;
//     cin >> charge;

//     if (charge < 0) {
//         cout << "Anion" << endl;
//     } else if (charge > 0) {
//         cout << "Cation" << endl;
//     } else {
//         cout << "Neutral" << endl;
//     }
//     return 0;
// }

//////////////////////Quantum Level: Problem 11////////////////////////////

// #include <iostream>
// using namespace std;

// int main()
// {
//     double E_1;
//     int n;
    
//     cout << "Enter the value of Ground State Energy and then the Maximum Level of Energy: " << endl;
//     cin >> E_1 >> n;

//     for (int i = 1; i <= n; i++){
//         cout << "Energy of Energy Level " << i << " : " << E_1 * i*i << endl; 
//     }
// }

/////////////////////Sensor: Problem 12///////////////////////////
// A sensor logs 10 readings, some of which are invalid and recorded as negative numbers by
// mistake. Write a program that reads 10 values from the user in a for loop, skips (does not add)
// any negative value, and prints the total sum and the count of valid (non-negative) readings at
// the end.

// #include <iostream>
// using namespace std;

// int main()
// {
//     double readings;
//     double sum = 0;
//     for (int i = 1; i <= 10; i++) {
//         cout << "Enter the value " << i << " for the sensor readings." << endl;
//         cin >> readings;
//         if (readings > 0) {
//             sum = sum + readings;
//         } else {
//             continue;
//         }
//     }
//     cout << "Total sum and the count of valid (non-negative) readings is: " << sum << endl;

//     return 0;
// }

//////////////////////Voltmeter Array: Problem 13//////////////////////

// #include <iostream>
// using namespace std;

// int main()
// {
//     double readings[6];
//     double sum = 0;

//     for (int i = 1; i <= size(readings); i++) {
//         cout << "Enter the voltmeter reading " << i << " : ";
//         cin >> readings[i];
//     }

//     for(int i = 1; i <= 6; i++){
//         sum = sum + readings[i];
//     }

//     cout << "Total sum of the readings: " << sum << endl;
//     cout << "Average of all the readings: " << sum/size(readings) << endl;

//     return 0;
// }


////////////////////////////Threshold count: Problem 14/////////////////////

// #include <iostream>
// using namespace std;

// int main()
// {
//     double threshold = 75;
//     double readings[8];
//     int count = 0;

//     for (int i = 1; i <= size(readings); i++) {
//         cout << "write down the reading " << i << " for safety: ";
//         cin >> readings[i];
        
//         if (readings[i] > 75) {
//             count++;
//         } else {
//             continue;
//         }
//     }
//     cout << "Total number of readings that exceed the threshold value: "<< count << endl;

// }

//////////////////////Inverse Array: Problem 15//////////////////////////
//  Write a program that reads 6 readings into an array and then prints them in reverse order (last
// reading first), using a loop that walks the array from the last index to the first.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[6];
//     int inv_arr[6];

//     for (int i = 0; i < size(arr); i++){
//         cout << "Enter the integer value "<< i+1 << " for the array: ";
//         cin >> arr[i];
//     }
//     int j = 0;
//     for (int i = size(arr); i>=1; i--) {
//         inv_arr[j] = arr[i-1];
//         j++;
//     }
//     cout << "The Inverse Array: " << endl;

//     for (int i = 0; i < size(inv_arr); i++) {
//         cout << inv_arr[i];
//     }
// }

/////////////////////////////Pointer indexing: Problem 16/////////////////////


// #include <iostream>
// using namespace std;

// int main() {
//     double voltage[5] = {12.2, 11.4, 16.0, 11.5, 13.3};
//     double *ptr = voltage;

//     for (int i = 0; i < 5; i++) {
//         cout << "Reading " << i << ": " << *(ptr + i) << endl;
//     }
//     return 0;
// }

//////////////////////Offsets: Problem 17///////////////////////

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double a = 18.45;
    double b = -3.84;

    double* ptr_a = &a;
    double* ptr_b = &b;

    cout << fixed << setprecision(2);

    cout << "Before swapping: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    double temp = *ptr_a;  
    *ptr_a = *ptr_b;       
    *ptr_b = temp;         

    cout << "After swapping: " << endl;
    cout << "offset_a = " << a << endl;
    cout << "offset_b = " << b << endl;

    return 0;
}