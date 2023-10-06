#include <iostream>
using namespace std;
int partation(int A[],int lb,int ub) {
    int pivot = A[lb];
    int start= lb;
    int end= ub;
    while (start <end)
    {
        while (A[start]<= pivot)
        {
            start++;
        }
        while (A[end] > pivot)
        {
            end--;
        }
        if (start<end)
        {
            swap(A[start],A[end]);
        }
    }
    swap(A[lb],A[end]);
    return end;   
}
void QuickSort(int A[],int lb ,int ub) {
    if(lb < ub) {
        int p = partation(A,lb,ub);
        QuickSort(A,lb,p-1);
        QuickSort(A,p+1,ub);

    }
}
int main () {
    int n;
    cin>>n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    cout<<"Original Array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    QuickSort(A,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    
}