/* Namespace */

#include <iostream> 
#include <string>

using namespace std;

namespace MyNamespace{
    int x = 42; 
}

using namespace MyNamespace;

int main () {

    cout << x << endl; // No need to write MyNamespace::x
    return 0; // Terminates the program 
}

/* Additional Notes 
    * URL: https://www.w3schools.com/cpp/cpp_namespaces.asp
    * Namespace: a way to group related code together under a name 
    * Purpose 
        * Organize code into logical groups 
        * Avoid name conflicts, notably large projects 
        * Separate your code from code in libraries 
    * using namespace std : allow you to use cout, cin, and endl without writing std:: everytime 
    * But in large projects, it is better to write std:: before each item. 
    * This prevents conflicts if different libraries have functions or variables with the same name.
*/