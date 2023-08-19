// #include <iostream>
// using namespace std;
// class Person {
//     public:
//         char name[10];
//         int a;
//         char gender[10];
        
//         void print1 (
//             cin>>name;
//             cin>>a;
//             cin>>age;
//         )
//         void printresult (
//             cout<<touper(printresult);
//         )
// };
// int main () {
//     void printresult();
// }
#include <iostream>
#include <cstring> // For string manipulation functions
using namespace std;

class Person {
public:
    char name[10];
    int age; // Corrected the variable name from 'a' to 'age'
    char gender[10];

    void print1() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter gender: ";
        cin >> gender;
    }

    void printresult() {
        // Use toupper function to capitalize the gender
        for (int i = 0; gender[i],name[i]; i++) {
            gender[i] = toupper(gender[i]);
            name[i] = toupper(name[i]);
        }
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

int main() {
    Person person; // Create an instance of the Person class
    person.print1(); // Call the print1 function to input data
    person.printresult(); // Call the printresult function to display the result
    return 0;
}
