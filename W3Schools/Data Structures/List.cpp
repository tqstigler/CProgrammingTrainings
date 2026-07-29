/* C++ List */

#include <iostream>
#include <string>
#include <list> 

using namespace std; 

int main () {

    // Create a list called cars that will store strings 
    list<string> cars; // list<datatype> listName 
    cars = {"BMW", "Kia", "Ford", "Volvo", "Mazda"};

    // Print the List Elements 
    for (string car : cars){
        cout << car << ", ";
    }
    
    cout << "\n";

    // Access the List 
    cout << "Front of the list: " << cars.front() << "\n";
    cout << "End of the list: " << cars.back() << "\n";

    // Change a List Element 
    cars.front() = "Open"; // Front of the list (Reassign)
    cars.back() = "Toyota"; // End of the list (Reassign)

    // Add List Elements 
    cars.push_front("Lex");
    cars.push_back("Tesla");

    cout << "\nNew List: " << endl;
    // Print the List Elements 
    for (string car : cars){
        cout << car << ", ";
    }

    return 0; 
}

/* Additional Notes 
    * URL: https://www.w3schools.com/cpp/cpp_list.asp 
    * Store multiple elements of the same type and dynamically grow in size
    * Ablity to ADD and REMOVE elements for both begining and end of a list
    * You cannot directly jump to a specific index, or access element by index numbers
    * Yout CANNOT access by index numbers   
*/