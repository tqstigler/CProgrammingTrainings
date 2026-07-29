/*Structs and Enum*/

#include <iostream>
#include <string>

using namespace std; 

struct{
    string carbrand;
    int year;
} car1, car2; // Sturct Varaibles 

struct student{
    string name; 
    int age; 
    char grade; 
} s1;

enum Level {
    LOW, 
    MEDIUM, 
    High
};

int main () {

    // Declare and Assign Struct Variables 
    car1.carbrand = "BMW";
    car1.year = 1995;
    car2.carbrand = "Kia";
    car2.year = 2014; 
    s1.name = "Tamarr";
    s1.age = 28; 
    s1.grade = 'B';

    enum Level myVar = MEDIUM; 

    // Print Statements 
    cout << myVar << endl; // Print 1
    cout << car1.carbrand << " " << car1.year << "\n";
    cout << car2.carbrand << " " << car2.year << "\n";
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Grade: " << s1.grade << endl;

    return 0;
}

/* Additional Notes 
    * URL: https://www.w3schools.com/cpp/cpp_structs.asp
    * Structures (Structs): group several related variables into one place
    * Contain different data types: int, string, bool
    * URL: https://www.w3schools.com/cpp/cpp_enum.asp
    * Enum: represents a group of constants 
    * Enums are used to give names to constants, which makes the code easier to read and maintain


*/