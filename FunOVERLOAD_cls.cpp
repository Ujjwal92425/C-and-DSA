/*
#include <iostream>
using namespace std;
void sum(int,int);
void sum(double,double);
void sum(char,char);
int main () {
    int a=10,b=20;
    double c=7.52,d=8.69;
    char e='u',f='b';
    sum(a,b);
    sum(c,d);
    sum(e,f);
}
void sum(int x,int y) {
    cout<< x+y<<endl;
}
void sum(double x,double y) {
    cout<< x+y<<endl;
}
void sum(char x,char y) {
    cout<< x+y<<endl;
}
*/

 /* 
#include <iostream>
using namespace std;
int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() { 
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  cout<< "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}
*/

#include <iostream>
using namespace std;
/*
int x=0;
int main () {
    int x=10;
    cout<<"value of global x is :"<<::x;
    cout<<"value of local x is :"<<x;

}
*/
int global = 5;
void display () {
    cout<<global<<endl;
}
int main () {
    display();
    global =10;
    display();
    
}
