
#include <iostream> // input/output streams 
using namespace std; 

int main() {

    // Declaring Variables 
    int x = 5, y = 6, z = 7; // Declaring Multiple Variables 
    int input1, input2, output;
    
    // Print Statements 
    cout << "Hello World!" << endl;
    cout << 3 + 4 << endl;
    cout << "I am learning C++ \n";
    cout << "Staring something new \n";
    cout << "Janacia loves saying " << y << " " << z << endl;
    cout << "Enter a number: \n";
    cin >> input1;
    cout << "Enter another number: \n";
    cin >> input2;
    output = input1 + input2;
    cout << "Sum is: " << output;
    return 0; 
}

/* C++ Output (Print Text) 
    * URL: https://www.w3schools.com/cpp/cpp_output.asp
    * COUT object, together with the << operator, is used to output values and print the text
    * URL: https://www.w3schools.com/cpp/cpp_output_numbers.asp
    * Print out numbers is not needed for double quotes
    * \n: escape sequence, forces the cursor to change it's position to the beginning of the next line on the screen
    * \t: creates a horizontal tab 
    * \\: inserts a backslash character (\)
*/

/* Comments
    * https://www.w3schools.com/cpp/cpp_comments.asp
    * Purpose: Documentation, readable, explainations 
    * Single-line comments: //
    * Multi-line comments: 
*/

/* C++ Variables 
    * URL: https://www.w3schools.com/cpp/cpp_variables.asp  
    * Declaring Variables: datatype variableName = value; 
    * int: stores integers (whole numbers)
    * double: stores floating point numbers 
    * char: stores single characters 
    * string: stores text 
    * bool: stores value to true or false
    * URL: https://www.w3schools.com/cpp/cpp_variables_multiple.asp
    * Variables must be identified with unique names 
    * Identifiers: Unique name 
    * Note: It is recommended to use descriptive names in order to create understandable and maintainable code
    * URL: https://www.w3schools.com/cpp/cpp_variables_constants.asp
    * Constants (const): declaring a variable that is unchangeable and read-only
*/

/* C++ User Input 
    * URL: https://www.w3schools.com/cpp/cpp_user_input.asp
    * cin: user input 
    * >>: recevies the input from the keyboard 
    * cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)
    * cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)
*/