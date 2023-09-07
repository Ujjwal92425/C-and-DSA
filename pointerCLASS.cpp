/*
#include <iostream>
using namespace std;
int main () {
    int x=10;
    int *ptr1;
    int *ptr2;
    ptr1=&x;
    ptr2=ptr1;
    *ptr2=*ptr1;
    cout<<ptr1<<endl;
    cout<<ptr2+1<<endl;
    cout<<*ptr1<<endl;
    cout<<*ptr2;
}
*/
#include <iostream>
using namespace std;
int main () {
    int *ptr;
    int **ptr1;
    int x=200;
    ptr=&x;
    ptr1=&ptr;
    cout<<*ptr<<endl<<**ptr1;
    
}