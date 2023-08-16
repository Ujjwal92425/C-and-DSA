/*#include <iostream>
using namespace std;
int main () {
    int i;
    int a[5]={1,2,3,4,5};
    for ( i = 0; i < 5; i++)
    {
        cout << " "<<a[i];
    }
    
}*/
//insertion at beginning

/*#include <iostream>
using namespace std;
int main () {
    int n,i,item;
    cout <<"Enter the size of Array:"<<endl;
    cin>>n;
    int array[n];

    for ( i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<<"Elements Of Array are :";

    for ( i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }

    cout<<"The item u need to print :"<<endl;
    cin>>item;

    for ( i = n-1; i >=0; i--)
    {
        array[i+1]=array[i];
    }
    array[0]=item;
    n++;
    cout<<"New Array:"<<endl;
    for ( i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }   
}
*/
//insertion at given position
/*#include <iostream>
using namespace std;
int main () {
    int i,pos,num,n;
    cout<<"enter the size"<<endl;
    cin >>n;
    int array[n];
    for ( i = 0; i < n; i++)
    {
        cin>>array[i];

    }

    cout<<"enter the value"<<endl;
    cin>>num;
    cout<<"enter the position"<<endl;
    cin>>pos;

    for ( i = n-1; i >=pos -1; i--)
    {
        array[i+1]=array[i];

    }
    array[pos-1]=num;
    n++;
    cout<<"New Array is :"<<endl;
    for ( i = 0; i < n ; i++)
    {
        cout <<array[i];
    } 

}*/

//delete at any point

/*#include <iostream>
using namespace std;
int main () {
    int i,pos,n;
    cout<<"enter the size"<<endl;
    cin >>n;
    int array[n];
    for ( i = 0; i < n; i++)
    {
        cin>>array[i];

    }

    
    cout<<"enter the position u want to delete from"<<endl;
    cin>>pos;

    for ( i = pos-1; i < n; i++)
    {
        array[i]=array[i+1];
    }
    n--;
    for ( i = 0; i < n; i++)
    {
        cout<<array[i];
    }
    
    
}*/

//sorting:
/* a1=5
a2=4
temp
a1=a2
a2=temp
temp=a1
*/

#include <iostream>
using namespace std;
int main () {
    int n,i,m,s,size;
    cout <<"Enter the size of Array:"<<endl;
    cin>>n;
    int array1[n];

    for ( i = 0; i < n; i++)
    {
        cin>>array1[i];
    }
    cout<<"size of array 2"<<endl;
    cin>>m;
    int array2[m];

    for ( i = 0; i < m; i++)
    {
        cin>>array2[i];
    }
    
    if (n>m)
    {
        for ( i = 0; i < n; i++)
    {
        array1[m+i]=array2[i];
    }
    }
    
    
    
    /*for ( i = 0; i < n+m; i++)
    {
        if (array1[i]>array1[i+1])
        {
            array1[i]=array1[i+1];
        }  
    }*/
    if (n<m)
    {
        for ( i = 0; i < m; i++)
    {
        array1[n+i]=array2[i];
    }
    }
    for ( i = 0; i < m; i++)
    {
        cout<<array1[i];
    }  
}