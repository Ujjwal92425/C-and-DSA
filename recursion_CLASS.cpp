
// #include <iostream>
// using namespace std;
// int main () {
//     int rec(int);
//     int n,fact;
//     cout<<"Enter the number: "<<ends;
//     cin>>n;
//     fact= rec(n);
//     cout<<"Thr Factorial is : "<<fact;
// }
// int rec(int a) {
//     int b;
//     if (a<=1)
//     {
//         return (1);
//     }
//     else {
//         b=a+rec(a-1);
//         return (b);
//     }
    
// }

// #include <iostream>
// using namespace std;
// int main () {
//     int n,i,sum=0;
//     cin>>n;
//     for ( i = 0; i <= n; i++)
//     {
//         sum=sum+i;
//     }
//     cout<<sum;
    
// }


/*
#include <iostream>  
using namespace std;  
class Employee {  
   public:  
       int id;   
       string name;  
       void insert(int i, string n)    
        {    
            id = i;    
            name = n; 
        }    
       void display()    
        {    
            cout<<id<<"  "<<name<<"  "<<endl;    
        }    
};  
int main(void) {  
    Employee e1; //creating an object of Employee   
    Employee e2; //creating an object of Employee  
    e1.insert(201, "Sonoo");    
    e2.insert(202, "Nakul");    
    e1.display();    
    e2.display();    
    return 0;  
} 
*/
//fabionacii 
#include <iostream>  
using namespace std; 
int main () {
    int n1=0,n2=1,n3,num,i;
    cin>>num;
    cout<<n1<<" "<<n2<<" ";
    for ( i = 2; i < num; i++)
    {
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;

    }
    
    
}