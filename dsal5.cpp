#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int e;
    cout<<"enter the value of element: ";
    cin>>e;
    int l=0,r=n-1;
    int p;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]<e){
            l=mid+1;
            p=mid;
        }
        else if(arr[mid]>e){
            r=r-1;

        }
        else{
            p=mid;
            break;
        }
    }
    cout<<p;
}