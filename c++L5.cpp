/* Imagine you are developing a payroll management system for a company that needs
to keep track of employee salary information. As part of this system, you are tasked with
creating a class named "Employee" to represent each employee's salary. The class
should have the following specifications:

A private static data member named "count" keeps track of the total number of
employee objects created. It should be initialized to O.

A public static member function named igetCount" that allows the company to retrieve
the total count of employee objects.

A public member function named "setSaIary" takes in the value of "salary" as a
parameter and sets the corresponding data member for an employee object. This
function allows the company to set the salary for an employee.

A public member function named "getSalary" retrieves and returns the value of "salary"
for an employee object. This function allows the company to retrieve an employee's
salary for various calculations.

A private data member named "salary" stores the integer value of an employee's salary.
This data member is specific to each employee object.

Based on the given specifications, your task is to implement the "Employee" class that
meets the requirements mentioned above. This class will help the company manage
employee salary information efficiently within the payroll management system.*/


//friend function
/*#include <iostream>
using namespace std;

class MyClass {
    friend void printMessageLoop(MyClass& obj, int count);
    int data;

public:
    int getData() {
        return data;
    }
};

void printMessageLoop(MyClass& obj, int count) {
    for (int i = 0; i < count; ++i) {
        cout << "Hello from friend function!" << endl;
    }
}

int main() {
    MyClass obj;
    int loopCount = 3;

    printMessageLoop(obj, loopCount);

    return 0;
}*/