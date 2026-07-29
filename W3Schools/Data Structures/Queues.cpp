/* C++ Queues */

#include <iostream>
#include <queue>

using namespace std; 

int main() {

    // Create a queue of strings called cars 
    queue<string> cars; // queue<datatpye> queueName

    // Add elements to the queue
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");    

    // Access the front element (first and oldest)
    cout << cars.front();  // Outputs "Volvo"

    // Access the back element (last and newest)
    cout << cars.back();  // Outputs "Mazda"

    cars.pop(); // Remove the front element

    cout << cars.front(); // Prints new front element
    
    return 0; 
}

/* Additional Notes 
    * URL: https://www.w3schools.com/cpp/cpp_stacks.asp 
    * Queue: Stores multiple elements in a specific order (First In First Out)
    * Elements in the Queue are NOT accessed by index numbers 
    * Accessible an element at the front or the back 
    * Note: The type of the queue (string in our example) cannot be changed after its been declared.
    * Note: You cannot add elements to the queue at the time of declaration, like you can with vectors
    * Access Queue Elements: .front(), and .back()
    * Change Queue Elements: reassign with .front() and .back()
    * Remove Element: .pop() function removes the front element 
*/