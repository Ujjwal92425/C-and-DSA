/*#include <iostream>
using namespace std;
class str
{
private:
    int id;
    char name[10];

public:
    void readdata();
};

void str::readdata() {

    cout<<"Enter name and Id: ";
    cin>>name>>id;
    cout << "Name : "<<name<<endl;
    cout << "Id :  "<<id<<endl;
}

int main () {
    str s;
    s.readdata();  
}*/

#include <iostream>
#include <iomanip>
using namespace std;
int main () {

    // double a=30.101;
    // double b=3.01416;
    // cout<<showpoint<<a<<endl<<b;
    // cout<<noshowpoint<<a<<endl<<b;
    cout<<setiosflags(ios :: showpos) << setiosflags(ios::scientific)<<123<<123.23;
    return 0;

}
