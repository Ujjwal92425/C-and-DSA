#include <iostream> 
using namespace std;
int main () {
    int i,j,n,temp;

    cout<<"Enter size:"<<endl;
    cin>>n;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];

    }
    //bubble
    // for ( i = 0; i < n-1; i++)
    // {
    //     for (j = 0; j < n-1; j++)
    //     {
    //         if (arr[j]>arr[j+1])
    //         {
    //             temp=arr[j];
    //             arr[j]=arr[j+1];
    //             arr[j+1]=temp;
    //         }
            
    //     }
        
    // }

    //insertion
    // for (i = 1; i < n; i++) {  
    //     temp = arr[i];  
    //     j = i - 1;  
  
    //     while(j>=0 && temp <= arr[j])  /* Move the elements greater than temp to one position ahead from their current position*/  
    //     {    
    //         arr[j+1] = arr[j];     
    //         j = j-1;    
    //     }    
    //     arr[j+1] = temp;    
    // }    
    // for ( i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    
}