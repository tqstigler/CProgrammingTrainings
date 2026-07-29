/* C++ Deque */

#include <iostream>
#include <deque> 

using namespace std; 

int main() {

    // Create a deque called cars that will store strings 
    deque<string> cars; // deque<type> dequeName 
    cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print deque elements
    for (string car : cars) {
        cout << car << "\n";
    }

    // Access a Deque 
    cout << cars[0];  // Get the first element 
    cout << cars[1];  // Get the second element
    cout << cars.at(2); // Get the thrid element 

    return 0; 
}

/* Additional Notes 
    * URL: https://www.w3schools.com/cpp/cpp_deque.asp
    * Ablity to access by index numbers 
    * The type of the deque (string in our example) cannot be changed after its been declared.
    * Access an element at a specified index: .at() function 
    * Note: The .at() function is often preferred over square brackets [] because it throws an error message if the element is out of range
    * Change a Deque Element: use .at() function with index number 
    * .push_front() to insert an element at the beginning of the deque
    * .push_back() to add an element at the end of the deque 
    * .pop_front() to remove an element from the beginning of the deque
    * .pop_back() to remove an element at the end
*/