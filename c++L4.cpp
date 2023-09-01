// You are using GCC
//cy

#include <iostream>
using namespace std;
struct DEPT {
    int n;
    char name[10];
    int id;
    int expi;
    long int salary;
}c;
int main () {
    cin>>c.n;
    int t=c.n;
    
   
    for(int i=0;i<t;i++) {
        cin>>c.name>>c.id>>c.expi>>c.salary;
        
        if(c.expi==10) {
            c.salary=c.salary+c.salary*0.1;

        }
        else if (c.expi>=5 && c.expi <=9) {
            c.salary=c.salary+c.salary/100*5;
        }
        else  if  (c.expi>=1 && c.expi<=4) {
            c.salary=c.salary+c.salary/100*2;
        }

        cout<<"Employee Name :"<<c.name<<endl;
        cout<<"Employee Id :"<<c.id<<endl;
        cout<<"year of experience :"<<c.expi<<endl;
        cout<<"salary :"<<c.salary<<endl;
        cout<<endl;
    
    }
}