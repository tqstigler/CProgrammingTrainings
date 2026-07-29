#include <iostream>
#include <string>

using namespace std; 

class MyClass {             // The Class
    public:                 // Access specifier 
        int myNum;          // Attribute 
        string myString;    // Attribute 
};

class Car{
    public: 
        int speed(int maxSpeed);
};

int Car::speed(int maxSpeed){
    return maxSpeed; 
}

int main() {
    
    // Initialze Objects
    MyClass myObj; // Create an OBJECT of MyClass (myObj = Object)
    Car myObjCar; // Create an Object of Car (myObjCar = Object)
    
    // Access attributes and set values 
    myObj.myNum = 15; // Access the attrubites from class 
    myObj.myString = "Some text";

    // Print attribute values 
    cout << myObj.myNum << endl; 
    cout << myObj.myString << endl; 
    cout << "Number from Class Car from a function: " << myObjCar.speed(200) << endl; 
    return 0; 
}

/* Additional Notes 
    * URL: https://www.w3schools.com/cpp/cpp_oop.asp
    * Object-Oriented Programming: creating objects; which can hold data and functions that work on that data
    * Move repeated code into functions or classes and reuse it 
    * Class: what an OBJECT should look like 
    * Object: created on that class 
    * Procedural programming: writing functions that operate on data 
        * Code is organized around functions  
    * Object-oriented programming (OOP): creating objects that contain both the data and the functions 
        * Code is organized around objects    
*/

/* Class and Objects 
    * URL: https://www.w3schools.com/cpp/cpp_classes.asp
    * "Class members": variables and functions that belongs to the class 
    * Class: user-defined data type; works as an object constructor 
    * Attributes: varaibles are declared within a class 
    * Access specifier: specifies that members of the class are accessible from outside the class
*/

/* Class Methods 
    * URL: https://www.w3schools.com/cpp/cpp_class_methods.asp
    * Methods: functions that belongs to the class 
    * Defining functions that belongs to a class: inside or outside class defintion
    * You have the ablity to pass to methods just like regular functions
    * 
*/

/* C++ Constructors 
    * URL: https://www.w3schools.com/cpp/cpp_constructors.asp
    * Constructor: special method that is automatically called when an object of a class is created
    * Creating a constructor, use the same name as the class followed by parentheses() 
    * Usage: Run by themseleves 
    * The constrct
*/