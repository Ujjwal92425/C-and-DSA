//Question 4 neo : Ex 1. COD 
#include <iostream>
using namespace std;
int main () {
    int n,i,top=-1,temp;
    cin>>n;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
        top++;
    }
    for ( i = top; i >=0; i--)
    {
       cout<<arr[i] <<" ";
    }
cout<<endl;
    for ( i = 0; i <=top; i++)
    {
       cout<<arr[i] <<" ";
    }
    for ( i = top; i >= 0; i--)
    {   for(int j =top; j>=0;j--) {
        if (arr[i]>arr[i-1])
        {
            temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
        }
    }
        
    }
    cout<<endl;
     for ( i = 0; i <=top; i++)
    {
       cout<<arr[i] <<" ";
    }
    cout<<endl;
    cout<<"Max: "<<arr[0];
    cout<<endl<<"Min: "<<arr[top];
    

    
}

//