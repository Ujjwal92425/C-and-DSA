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
/*#include <iostream>
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
*/
//static member function 

#include <iostream>
using namespace std;
class box
{
private:
    static int length;
    static int breath;
    static int height;

public:
    static void print() {
        cout<<" the value of length is : "<<length<<endl;
        cout<<" the value of breath is : "<<breath<<endl;
        cout<<" the value of height is : "<<height<<endl;

    }  
};
// int box :: length =10;
// int box :: breath =20;
// int box :: height =30;


int main () {
    box b;
    cout << "static member function is called through object name :\n"<<endl;
    b.print();
    cout << "static member function is called through class name :\n"<<endl;

    box ::print();
    return 0;
}





