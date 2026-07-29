/* C++ Errors */

#include <iostream>
#include <string> // Modern object-orineted class 
#include <ctime>

using namespace std; 

int main (){

    // 
    int *ptr = new int(10); 
    delete ptr; 
    cout << *ptr; // Deangling pointer 

    return 0; 
}

/* Additional Notes 
    * URL: https://www.w3schools.com/cpp/cpp_errors.asp
    * Common Compile-Time Errors: 
        * Missing semicolon
        * Using undeclared variables
        * Mismatched types 
    * Common Runtime Errors: When the program complies but crashes or behaves unexpectedly
        * Dividing by zero 
        * Accessing out-of-bounds array elements 
        * Using deleted memory (dangling pointer): a pointer that points to a memory location that has already been deallocated, freed, or out of scope 
    * Build Good habits 
        * Always initialize your variables
        * Use meaningful variable names
        * Keep your code clean and use indentation to stay organized
        * Keep functions short and focused
        * Check if loops or conditions are running as expected
        * Read error messages carefully - they often tell you exactly where the problem is
    *   
*/