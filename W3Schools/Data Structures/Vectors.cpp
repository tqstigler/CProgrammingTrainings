/* C++ Vectors */

#include <iostream>
#include <string>
#include <vector>

using namespace std; 

int main () {

    // Initialze a vector vector<datatype> variable 
    vector<string> cars = {"Kia", "BMW", "Ford", "Volvo"}; // vector<type> vectorName

    // Access the vectors 
    cout << "The size of the vector returns: " << cars.empty() << "\n";
    cout << "The First element of the vector: " << cars[0] << "\n";
    cout << "The Second element of the vector: " << cars[1] << "\n";
    cout << "The Front element of the vector: " << cars.front() << endl; 
    cout << "The End element of the vector: " << cars.back() << endl; 
    cout << "The Thrid element of the vector: " << cars.at(2) << endl;

    // Changing the element 
    cars.at(0) = "Buick"; // Assigning a new value at the First element
    cout << "New Value at the First element: " << cars.at(0) << endl;  

    // Add Elements 
    cars.push_back("Tesla");

    // Print all elements in the vectors 
    for (int i = 0; i < cars.size(); i++){
        cout << cars[i] << "\n";
    }

    return 0; 
}

/* Additional Notes 
    * URL: https://www.w3schools.com/cpp/cpp_vectors.asp
    * Vector: resizeable array; store multiple elements of the same data type 
    * Ability to grow or shrink UNLIKE arrays 
    * .at(): specify the index number
    * .push_back(): add an element at the END of the vector 
    * .pop_back(): removes an element from the END of the vector 
    * .size(): The amount of elements in a vector 
    * .empty(): Checking if a vector is empty 
        * return 1 (true) empty 
        * return 0 (false) one or more elements
    *    
*/