#include <iostream>
using namespace std;
int main () {
    int n,count,i,j,temp,iteam;

    cout<<"ENTER THE SIZE OF ARRAY : "<<endl;

    cin>>n;
    int arr[n];

    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout <<"ARRAY IS : "<<endl;
    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for ( i = 0; i < n-1; i++) {
        for ( j = 0; j < n-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    cout<<"SORTED ARRAY : ";
    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"ENTER THE ELEMENT U WANT TO SEARCH : "<<endl;
    cin>>iteam;

    for ( i = 0; i < n; i++)
    {
        if (arr[i]==iteam)
        {
            cout<<"ELEMENT FOUND AT INDEX "<<i<<" "<<endl;
        }
        
    }   
}