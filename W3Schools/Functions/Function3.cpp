/* C++ Functions */

#include <iostream>
using namespace std; 

// Global Variable 
int x = 5; 
void myFunction(){
    int x = 22; 
    cout << x << endl; // Local variable of x
}

int main (){

    myFunction(); 
    cout << x << "\n"; // Refers to the global variable
    
    auto message = [](){ // Lambda [capute] (paramters) { code };
        cout << "Hello World" << "\n";
    };
    message();
    return 0; 
}

/* Additional Notes */
/*
    * URL: https://www.w3schools.com/cpp/cpp_function_overloading.asp
    * Function Overloading: Multiple functions to have the same name, as long as their parameters are different in type or number
    * Multiple functions can have the same name as long as the number and/or type of parameters are different
    * Scope: Variables are only accessible inside the region they are created
    * Local Scope: cannot be used outside the function it belongs to 
    * Global Scope: A variable creatd outside of a function; available from within any scope, global and local
    * Note: If you operate with the same variable name inside and outside of a function, C++ will treat them as two separate variables
    * Note: Use local variables (with good variables) as much as you can
    * Recursion: a function call itself 
    * Lambda Function: anonymous function you can write directly in your code
    * Regular Functions vs Lambda Functions 
    * Regular Functions
        * You plan to reuse the function in multiple places 
        * You want to give the function a clear, meaningful name 
        * The logic is long or complex     
    * Lambda Functions 
        * You only need the function once 
        * The code is short and simple 
        * You want to pass a quick function into another function    
*/