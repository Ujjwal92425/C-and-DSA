//Question 4 neo : Ex 1. COD 
#include <iostream>
using namespace std;
int main () {
    int n,i,top=-1;
    cin>>n;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
        top++;
    }

    for ( i = 0; i <=top; i++)
    {
        if (i==top)
        {
            cout<<arr[top]<<" "<<"-1"<<endl;
        }
        else {
            if (arr[i]<arr[i+1]) {
                cout<<arr[i]<<" "<<arr[i+1]<<endl;
            }
            else if (arr[i]>arr[i+1]){
                cout<<arr[i]<<" "<<"-1"<<endl;
            }
        }
    }
}

//