/* C++ Date and Time */

#include <iostream>
#include <string>
#include <ctime> // A preprecessor to work with dates and times 
#include <time.h>

using namespace std; 

// Get the timestamp for the current date and time 
time_t timestamp; // time_t is a data type for timestamps 

int main(){

    time(&timestamp);
    cout << ctime(&timestamp) << endl;
    return 0; 
}

/* Additional Notes 
    * URL: https://www.w3schools.com/cpp/cpp_date.asp
    * <ctime> libary has variety of functions to measure dates and times
    * time() function gives us a current timestamp [Date and Time] 
    * ctime() funciton: show the date and time that a timestamp represents
    * An alternative way to use the time(): pass in a NULL pointer and use the return value instead
    * mktime() function: create a timestamp for any date 
*/