/* C++ Stacks */

#include <iostream>
#include <stack>

using namespace std; 

int main() {

    // Create a stack of strings called cars 
    stack<string> cars; // stack<datatype> stackName
    
    // Add elements to the stack
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda"); // Top of the stack 

    cars.top() = "Telsa"; // New Top of stack 
    cars.pop(); // Remove the last added element 

    return 0; 
}

/* Additional Notes 
    * URL: https://www.w3schools.com/cpp/cpp_stacks.asp 
    * Stack: Stores multiple elements in a specific order (Last In, First Out)
    * Elements in the Stack are not accessed by index numbers 
    * Only accessible at the TOP of the stack 
    * Note: The type of the stack (string in our example) cannot be changed after its been declared
    * Note: You cannot add elements to the stack at the time of declaration, like you can with vectors
    * Add Elements: .push() function 
    * Access Stack Elements: You can only access the top element, .top() function 
    * Change the Top Element: .top() function being reassign 
    * Remove Elements: .pop() function, remove top of stack 
*/