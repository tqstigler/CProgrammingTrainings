#include <iostream>
#include <string>
using namespace std;

int main (){

    // Initialize Variables 
    int x, y, z;
    x = 10; // X assign to 10 
    y = 3; // Y assign to 3
    z = 5; 

    // Print Statements 
    cout << x % y << endl; 
    cout << x + y << endl; 
    z += 5;
    cout << z << endl;
    cout << (x > y) << endl; // prints true (1)
    cout << ((x < 5) && (x < 10)) << endl; // print false (0)

    return 0;
}

/* Additional Notes */
/* URL: https://www.w3schools.com/cpp/cpp_operators.asp 
    * C++ divides the operators into the following groups 
    * Arithmetic, Assignment, Comparison, Logical, Bitwise
    * Modulus: Returns the division remainder
    * Compound operators make code shorter and easier to read, especially when updating the same variable many times
    * Logical Operators: test for true or false values    
    * C++ follows the order of operations (PEMDAS)
*/