/* C++ Input Validation */

#include <iostream>
#include <string> 

using namespace std;

int main () {

    // Initalize Variables 
    int number; 
    cout << "Enter a number: " << '\n';
    while (!(cin >> number)) {
        cout << "Invaild input. Try again: ";
        cin.clear(); 
        cin.ignore(10000, '\n'); // Remove bad input
    }
    cout << "You entered: " << number << '\n';

    return 0; 
}

/* Additional Notes 
    * URL: https://www.w3schools.com/cpp/cpp_input_validation.asp
    * Input validation: make sure the input is correct before your program continues 
    * Without vaildation, your program might crash or behave incorrectly 
*/