
#include <iostream> 
#include <string>

using namespace std; 

int main(){

    int myInt; 
    char myChar;
    int* ptr = new int; // creates memory space for one integer; ptr stores the address of that space 


    string food = "Pizza";
    string *ptrfood = &food; // A pointer variable that stores the address of food 
    string &meal = food;
    meal = "Burger";
    *ptr = 35; // Pointer variable stores 35

    cout << "Memory Address of Food: " << &food << endl;
    cout << ptrfood << endl; // Print the memory address pointing to food
    cout << food << endl; // Prints the value of food 
    cout << *ptrfood << endl; // Dereference
    cout << meal << endl; 

    cout << sizeof(myInt) << endl; 
    cout << sizeof(myChar) << endl; 
    cout << "New: " << *ptr << endl; 

    // Delete New 
    delete ptr; // Prevent memory leaks

    return 0; 
}

/* Additional Notes 
    * URL: https://www.w3schools.com/cpp/cpp_references.asp
    * A reference varaible is an alias for an existing variable (&)
    * URL: https://www.w3schools.com/cpp/cpp_references_memory.asp
    * Memory Address: (&) memory location in the computer 
    * References and Pointers are important in C++, because they give you the ability to manipulate the data in the computer's memory
    * Reduce the code and improve the performance
    * Pointer (*): Stores the memory address as its value 
    * Dereference: use the pointer to get the value of the variable
    * When used in declaration (string* ptr), it creates a pointer variable 
    * When NOT used in declaration, it act as a dereference operator
    * Memory Management: controlling how much memory your program uses 
    * C++ compiler automatically reserves space in memory 
    * sizeof(): checks the size of the variables 
    * When you want to create memory manually while the program is running you need to manage it yourself and clean it up when you're done
    * New: Lets you manage memory yourself 
    * When you create something with NEW, you need to remove it when done (DELETE)
    * Memory leak: If you forget to delete memory, your program will still run, but it may use more and more memory over time
*/