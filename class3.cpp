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

/*#include <iostream>
#include <iomanip>
using namespace std;
int main () {

    // double a=30.101;
    // double b=3.01416;
    // cout<<showpoint<<a<<endl<<b;
    // cout<<noshowpoint<<a<<endl<<b;
    cout<<setiosflags(ios :: showpos) << setiosflags(ios::scientific)<<123<<123.23;
    return 0;

}*/

/*#include <iostream>     // std::cout, std::fixed, std::scientific  
using namespace std;  
  
int main () {  
  double a = 3.1415926534;  
  double b = 2006.0;  
  double c = 1.0e-10;  
  
  cout.precision(5);  
  
  cout << "default:\n";  
  cout << a << '\n' << b << '\n' << c << '\n';  
  
  cout << '\n';  
  
  cout << "fixed:\n" << fixed;  
  cout << a << '\n' << b << '\n' << c << '\n';  
  
  cout << '\n';  
  
  cout << "scientific:\n" << scientific;  
  cout << a << '\n' << b << '\n' << c << '\n';  
  return 0;  
}  
*/
#include <iostream>     
#include <iomanip>      
using namespace std;  
  
int main () {  
    int a;
    cin>>a;
    int b;
    cin>>b;
  cout << setbase(b);  
  cout << a << endl;  
  return 0;  
}  
