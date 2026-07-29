#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main (){

    // Initalize the Arrays
    int myNum[3] = {10, 20, 30};
    string cars[3] = {"Kia", "Honda", "BMW"};
    vector<string> vehicles = {"Ford", "Volvo", "Ford"};
    string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };

    // Adding another element to the vector 
    vehicles.push_back("Tesla");

    // Access the arrays
    cars[2] = "Meds"; // Change the array element  
    cout << cars[0] << '\n';
    cout << cars[1] << '\n';
    cout << cars[2] << '\n';

    // Loop Through an Array 
    for (int i = 0; sizeof(cars)/ sizeof(cars[0]); i++){
        cout << "Car Number " << i << ": " << cars[i] << "\n";
    }
    
    for (int x = 0; x < 3; x++){
        cout << "Car Number " << x << ": " << vehicles[x] << "\n";
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << letters[i][j] << "\n";
        }
    }

    return 0; 
}

/* Additional Notes 
    * URL: https://www.w3schools.com/cpp/cpp_arrays.asp
    * Array are used to store multiple values in a single variable, instead of declaring separate variables for each value
    * You have the ablity to loop through arrays 
    * Omit Array Size is option; but it is recommened to initaize the size of an array 
    * Vectors: resizeable array (dynamic); adding and removing array elements 
    * Sizeof() operator: returns the size of a type in bytes 
    * It is good to know the different ways to loop through an array, since you may encounter them all in different programs.
    * Multi-Dimensional Arrays: array of arrays [rows][columns]   
    * Purpose of Muilt-Dimensional Arrays: Representing Grids 

*/