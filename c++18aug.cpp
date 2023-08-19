// argument with default 

/*#include <iostream>
using namespace std;

int sum(int x,int y,int z=0,int w = 0)

{ return (x+y+z+w);
}

int main () {
    cout << sum(10, 15) << endl;  
    cout << sum(10, 15, 25) << endl; 
    cout << sum(10, 15, 25, 30) << endl; 
    return 0;  
}*/

/*#include <iostream>
using namespace std;
int main(){
    int a=5;
    int b=3;
    int c=2;
    a=b++;
    b=--c;
    cout<<a<<b<<c;
    
    
}*/


//array of structure 
#include <iostream>
using namespace std;
struct emp
{
    string name;
};

int main() {

    emp e[5];
    int i;

    for ( i = 0; i < 5; i++)
    {
        cout<<"Enter the name of the employee no."<<i+1<<" ";
        cin>>e[i].name;
    }
    cout <<"\nNames of all employees: \n";
    for ( i = 0; i < 5; i++)
    {
        cout<<e[i].name<<endl;
    }
    cout<<endl;
    return 0; 
}

//enumerations

#include<iostream>
using namespace std;
int main()
{
    enum days{sun,mon,tues,wed,thur,fri,sat};
    days day1,day2;
    day1=sun;
    day2=fri;
    cout<<day1<<"\t"<<day2;
    if(day1>day2)
    {
        cout<<"day 1 comes after day2";
    }
    else
    {
        cout<<"day 1 comes before day 2";
    }
}


