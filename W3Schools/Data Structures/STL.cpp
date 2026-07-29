/* C++ Data Structures and STL */

#include <iostream> 
#include <string>
#include <vector>
#include <list> 
#include <set> 
#include <map>
#include <stack>
#include <queue>

using namespace std; 

int main () {

    // Create a vector called cars storing strings 
    vector<string> cars = {"Kia", "BMW", "Ford"};

    // Print ALL vector elements 
    for (string car : cars) {
        cout << car << "\n";
    }

    return 0; 
}

/* Additional Notes 
    * URL: https://www.w3schools.com/cpp/cpp_data_structures.asp
    * Data Structures: Store and organize data 
    * STL (Standard Template Library): Different data structures and algorithms to effectively store and manipulate data
    * Note: For every data structure, you MUST include a header file 
*/

/* STL Specific Concepts 
    * Containers: Data structures that provides a way to STORE data
    * Iterators: objects used to ACCESS elements of a data structure 
    * Algorithms: sort() and find(), that perform operations on data structures through iterators 
*/