/* 
#include <iostream>
using namespace std;
int main () {
    int a;
    a =23;
    
    float c ;
    c = 12.34;
    double d ;
    d= 2558.4565;
    
    char ch ='U';
    cout << a <<endl;
    cout << c <<endl;
    cout << d <<endl;
    cout << ch <<endl;
    
}
*/

// You are using GCC
#include <iostream>
using namespace std;
int main () {
    
    int a,b,c,d,e,f,g;
    
    cout << "Enter the value of a : " << endl;
    
    cin >> a ;
    
     cout << "Enter the value of b : " << endl;
     cin >> b; 
     
     c = a+b;
     cout << "Add : " << c << endl;
     
     d = a-b;
     cout << "Sub : " << d << endl;
     
     e = a*b;
     cout << "Mul : " << e << endl;
     
     f= a/b;
     cout << "Div : " << f << endl;
     
     c = a%b;
     cout << "Modulus : " << g << endl;
     
}
