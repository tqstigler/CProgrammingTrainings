/* C++ Exceptions */

#include <iostream> 
#include <string> 

using namespace std; 

int main() {
    try {                                       // Defines the code to test
        int age = 15; 
        if (age >= 18){
            cout << "Access granted - you are old enough.";
        }
        else {
            throw (age); // Triggers an exeception 
        }
        //throw 505;                              // Triggers an exception  
    }

    catch (int myNum) {                         // Handles the error 
        cout << "Access denied - You are a minor" << endl; 
        cout << "Age is: " << myNum << endl;  
    }

    return 0;
}

/* Additional Notes 
    * URL: https://www.w3schools.com/cpp/cpp_exceptions.asp 
    * Exception: throw an error 
    * C++ will normally stop and generate an error message 
    * The ablity to catch and handle error during runtime 
    * try: defines the code to test 
    * throw: triggers an exception 
    * catch: handles the error 
*/