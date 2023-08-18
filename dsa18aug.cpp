//insertion sort
# include <iostream>
using namespace std;
int main () {
    int n,i,j,temp;

    cout<<"Enter size:"<<endl;

    cin >> n;

    int arr[n];

    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // cout <<"Orignal array:" <<endl;

    // for ( i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }


    for ( i = 1; i < n; i++)
    {
        temp=arr[i];
        j=i-1;

        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;

        }  
        arr[j+1]=temp;
    
    }

    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }  
    
}