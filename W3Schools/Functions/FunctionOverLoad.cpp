/* C++ Function Overloading */

// Preprecessors and Directives 
#include <iostream>
#include <string>
#include <chrono>

using namespace std;

// Function Definitions 
int plusFunc(int, int);
double plusFunc(double, double);

int main () {

    // Declare the Variables 
    int myNum1 = plusFunc(8, 5);
    double myNum2 = plusFunc(4.3, 6.26);

    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2 << "\n";   

    return 0; 
}

// Function Defintion
int plusFunc(int x, int y) {
    return x + y;
}

double plusFunc(double x, double y) {
    return x + y;
}