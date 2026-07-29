/* Object-Oriented Programming */

#include <iostream>
#include <string>

using namespace std; 

class Dog{
    public: 
        void bark (){
            cout << "Woof!";
        }
};

int main(){
    Dog myDog; // Object from Class Dog 
    myDog.bark();
    return 0; 
}