/* C++ Programming Functions */

#include <iostream> 
#include <string>

using namespace std; 

struct Car{
    string brand; 
    int year;
};

// Declaring Functions 
void swapNums(int &, int&);
void PassArray(int []);
void PassFun(Car myCar){
    cout << "Brand: " << myCar.brand << ", Year: " << myCar.year << endl;
}
void ReferFun(Car &myCar){
    myCar.year++;
}

int main (){

    // Inital variables 
    int firstnum = 10; 
    int secondnum = 20; 
    int myNumbers[5] = {10, 20, 30, 40, 50};
    Car myCar = {"Toyota", 2020}; 
    // Print Statements 
    cout << "Before Swap: " << endl; 
    cout << firstnum << secondnum << endl;
    // Call the function, which will change the values of firstNum and secondNum
    swapNums(firstnum, secondnum);

    cout << "After swap: " << "\n";
    cout << firstnum << secondnum << "\n";
    PassArray(myNumbers); // Function Call
    PassFun(myCar);
    ReferFun(myCar);
    cout << "New year is: " << myCar.year << endl;

    return 0;
}

// Defining Functions 
void swapNums(int &x, int &y){
    int z = x; // temp variable 
    x = y; 
    y = z; 
}
void PassArray(int myNumbers[]){
    for (int i = 0; i < 5; i++){
        cout << myNumbers[i] << endl;
    }
}

/* Additional Notes */
/* Passing... 
    * URL: https://www.w3schools.com/cpp/cpp_function_reference.asp
    * Pass by Reference: Change the value of the arguments; (&) in the parameters
    * Pass Structure to a Function: grouped data inside a function; original data is not changed
    * Pass by Reference: modify the original data 
    * Use reference if you want the function to change the structure's data, or to avoid copying large structures
*/