/* C++ Polymorphism */
#include <iostream>
#include <string>

using namespace std;

// Base class
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n";
    }
};

int main () {

    // Creating Objects from your Class 
    Animal myAnimal;
    Pig myPig;
    Dog myDog;
    
    // Access the public functions 
    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
    return 0; 
}

/* Additional Notes 
    * URL: https://www.w3schools.com/cpp/cpp_polymorphism.asp
    * "Many forms"
    * Polymorphism: inherit attributes and methods from another class performing different tasks
    * A single action in different ways 
    * Note: (:) symbol allows the code to inherit from a class
    * Purpose: It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.
    * Virtual Functions: a member function in the base class that can be overriden in dervied classes 
    * Without virtual, C++ decides which function to call based on the pointer type, not the actual object type.
    * With virtual, it checks the actual object the pointer is pointing to.
*/