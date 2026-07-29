/* The Friend Keyword */

#include <iostream>
#include <string>
using namespace std; 

class Employee {
    private: 
        int salary; 
    
    public:
        Employee(int s) {
            salary = s; 
        }
    // Declare friend function 
    friend void displaySalary(Employee emp); // Not a member of the class Employee
};

void displaySalary(Employee emp){
    cout << "Salary: " << emp.salary << endl;
}

int main(){

    Employee myEmp(50000); // create the Employee object 
    displaySalary(myEmp);
    return 0; 
}