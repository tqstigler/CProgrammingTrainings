/* C++ Programming Functions */

#include <iostream> 
#include <string>

using namespace std; 

void myFunction() { // Declaration 
    cout << "Using the function call" << endl; // Definition 
}

void CallName(string);
void MulitParameters(string, int);
int ReturnNum(int);

int main (){

    myFunction(); // call the function 
    CallName("Tamarr");
    MulitParameters("Jackson", 28);
    cout << ReturnNum(5) << endl;
    return 0;
}

void CallName(string fname){
    cout << fname << endl;
}
void MulitParameters(string name, int age){
    cout << "Name: " << name << endl; 
    cout << "Age: " << age << endl; 
}
int ReturnNum(int x){
    return 4 + x;
}
/* Additional Notes */
/*
    * URL: https://www.w3schools.com/cpp/cpp_functions.asp
    * A function is block of code which only runs when it is called 
    * Parameters: Pass by value or data 
    * Void: function does not have a return value 
    * Declaration: the return type, the name of the function, and parameters
    * Definition: the body of the function (code to be executed)
    * It is common to declare function before int main, then define the function after int main()
*/
/* C++ Function Parameters
    * URL: https://www.w3schools.com/cpp/cpp_function_param.asp
    * Parameters: Inforamation can be passed to functions 
    * Argument: Parameters is passed to the function 
    * Default Parameter Value: set a value in the parameter "optional parameter"
    * Note that when you are working with multiple parameters, the function call must have the same number of arguments as there are parameters, and the arguments must be passed in the same order.
    * If you want to return a value, you can use a data type; use return inside the function
*/