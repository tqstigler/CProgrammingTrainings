/* C++ Templates */
#include <iostream>
#include <string>
using namespace std; 

template <typename T>
T add(T a, T b){
    return a + b;
}

template <typename T>
class Box {
  public:
    T value;
    Box(T v) {
      value = v;
    }
    void show() {
      cout << "Value: " << value << "\n";
    }
};


int main () {

    cout << add<int>(5,3) << endl;
    cout << add<double>(2.5, 1.5) << endl; 
    
    Box<int> intBox(50);
    Box<string> strBox("Hello");
    intBox.show();
    strBox.show();   

    return 0; 
}

/* Additonal Notes 
    * URL: https://www.w3schools.com/cpp/cpp_templates.asp
    * Templates: let you write a function or class that works with different data types.
    * Purpose:
        * Avoid repeating the same logic for different types
        * Write cleaner, reusable code
        * Support generic programming  
    * Note: Templates must be defined in the same file where they are used (usually in the .h file).
    * Templates must be defined in the same file where they are used (.h file)
*/