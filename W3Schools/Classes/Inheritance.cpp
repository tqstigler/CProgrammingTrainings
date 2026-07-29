/* C++ Ineritance */

#include <iostream>
#include <string>
using namespace std; 

class Vehicle{
    public:
        string brand = "Ford";
        void honk(){
            cout << "Tuut, tuu! \n"; 
        }
};

class Car: public Vehicle { // inherit from a class
    public:
        string model = "Mustang"; 
};

// Base class (parent)
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." << endl;
    }
};

// Derived class (child)
class MyChild: public MyClass {
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
};

// Base class
class Employee {
  protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main () {
    Car myCar; // Declaring an object from a class 
    MyGrandChild myObj; 
    Programmer myPro; // Declaring an object from a class
    myObj.myFunction();
    myCar.honk();
    cout << myCar.brand + " " + myCar.model << endl;
    myPro.setSalary(50000);
    myPro.bonus = 15000;
    cout << "Salary: " << myPro.getSalary() << "\n";
    cout << "Bonus: " << myPro.bonus << "\n";
    return 0; 
}

/* Additional Notes 
    * URL: https://www.w3schools.com/cpp/cpp_inheritance.asp
    * Inheritance: one class to reuse attributes and methods from another class
    * derived class (child) - the class that inherits from another class
    * base class (parent) - the class being inherited from
    * Purpose: It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class
    * Multilevel Inheritance: A class can also be derived from one class, which is already dervied from another class
    * Mutiple Inheritance: A class can also be derived from more than one base class, using a comma-separated list:
    * Protected (An Access Specifier): accessed in the inherited class
*/