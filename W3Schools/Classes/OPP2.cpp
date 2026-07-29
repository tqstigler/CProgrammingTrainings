/* C++ Programming */

#include <iostream>
#include <string>
using namespace std; 

class myCar {
    public:     // Access specifier 
        string brand;   // Attribute
        string model;   // Attribute
        int year;       // Attribute 
        myCar(string x, string y, int z); // Constructor declaration
        myCar();
};

class Employee {
    private: 
        int salary; // Private attribute 
    public: 
        // Set
        void setSalary(int s){
            salary = s; 
        }
        // Getter 
        int getSalary(){
            return salary; 
        }
};

// Constructor definition outside the class 
myCar::myCar(string x, string y, int z){
    brand = x; 
    model = y; 
    year = z;
}
myCar::myCar(){
    brand = "Unknown";
    model = "Unknown";
}

int main() {

    // Create Car Objects and call the constrcutors 
    myCar carObj1("BMW", "X5", 1999);
    myCar carObj2("Kia", "Forte", 2014);
    myCar carObj3;
    Employee emObj; 

    emObj.setSalary(50000);   

    // Print Statements 
    cout << "Car2: " << carObj2.brand << " " << carObj2.model << endl;
    cout << "Car3: " << carObj3.brand << " " << carObj3.model << endl; 
    cout << emObj.getSalary() << endl;
    return 0; 
}



/* C++ Constructors 
    * URL: https://www.w3schools.com/cpp/cpp_constructors.asp
    * Constructor: special method that is automatically called when an object of a class is created
    * Creating a constructor, use the same name as the class followed by parentheses() 
    * Usage: Run by themseleves 
    * The constrctor has the same name as the class 
    * no return type 
    * declared public 
    * automatically called when an object is created 
    * URL: https://www.w3schools.com/cpp/cpp_constructors_overloading.asp
    * Constrcutor Overlaoding: More than one constructor in the same class
    * 
*/

/* Access Specifiers 
    * URL: https://www.w3schools.com/cpp/cpp_access_specifiers.asp
    * Access specifiers: control how the members (attributes and methods) of a class can be accessed
    * Public (Keyword) is an access specifier 
    * public - members are accessible from outside the class
    * private - members cannot be accessed (or viewed) from outside the class
    * protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes
    * It is possible to access private members of a class using a public method inside the same class 
    * Note: By default, all members of a class are private if don't specify an access specifer 
    * 
*/

/* C++ Encapsulation 
    * URL: https://www.w3schools.com/cpp/cpp_encapsulation.asp
    * Encapsulation: make sure that "sensistive" data is hidden from users
    * It is advised to declare class variables / attributes as PRIVATE
    * 
*/

/* C++ Friend Functions 
    * URL: https://www.w3schools.com/cpp/cpp_friend_function.asp
    * friend function: not a member of the class, but it is allowed to access the class's private data

*/