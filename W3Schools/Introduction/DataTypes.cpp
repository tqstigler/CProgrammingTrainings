/*

*/
#include <iostream>
#include <string> // Libary for Strings
using namespace std; 

int main(){

    // Initialze Variables 
    int nyNum = 100; 
    float fNum = 100.5; 
    bool Coding = true; 
    char a = 65, b = 66, c = 67; 
    string greeting = "Hello";

    // Printing Statement 
    cout << nyNum << endl; 
    cout << Coding << endl;
    cout << a << endl;
    cout << "ASCII value of a: " << a << endl; 
    cout << greeting << endl;
    
    return 0; // terminates the program return false 
}


/* Additional Notes */
/* URL: https://www.w3schools.com/cpp/cpp_data_types.asp 
    * Data type specifices the size and type of information the variable will store
    * Data Types: Bool, Char, Int, Float, Double 
    * If you are familiar with ASCII, you can use ASCII values to display certain characters
    * AUTO keyword: detects the type of a variable based on the value you assign to it
    * AUTO only works when you assign a value at the same time
    * Once the type is chosen, it stays the same
*/