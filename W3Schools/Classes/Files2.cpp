/* C++ Files */
#include <fstream> // A precessor to work with files 
#include <iostream> // A precessor to work with I/O 
#include <string>
using namespace std;

int main () {

    // Create a text string, which is used to output the text file 
    string myText; 

    // Read from the text file
    ifstream MyReadFile("FirstFile.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, myText)) {
    // Output the text from the file
        cout << myText;
    }

    // Close the file
    MyReadFile.close();

    // Close the file 
    MyReadFile.close();
    return 0; 
}

/* Additional Notes 
    * URL: https://www.w3schools.com/cpp/cpp_files.asp
    * ofstream: creates and writes to files 
    * ifstream: reads from files 
    * fstream: a combination of ofstream and ifstream: creates, reads, and writes to files
    * It's always good practice to close files, cleans memory space 
*/