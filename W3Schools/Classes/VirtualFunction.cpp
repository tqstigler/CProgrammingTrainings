/* C++ Virtual Function */

// Preprecessor and Directives 
#include <iostream>
#include <string>

using namespace std; 

// Base Class 
class Animal {
    public:
        virtual void sound() { // Virtual Function with Virtual Keyword
            cout << "Animal sound\n"; // Output Message
        }
};

// Devired Class
class Dog : public Animal {
    public:
        void sound() {
            cout << "Dog barks\n";
        }
};

int main () {
    Animal *a; // Pointer to the base class to Animal 
    Dog d; // Class Object of Dog 
    a = &d; // a pointing the address of object d
    a ->sound(); // Access members of Dog class ((*a).sound())
    return 0; 
}