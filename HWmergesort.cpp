
#include <stdio.h>

void merge (int arr[],int left, int mid,int right) {
    int i = left;
    int j = mid+1;
    int k= left;

    while (i<=mid && j<=right)
    {
        int arr2[n];
        if (arr[i]<=arr[j])
        {
            arr2[k]=arr[i];
            i++;
        }
        else
        {
            arr2[k]=arr[j];
            j++;
        }
        k++;
    }

    if (i>mid)
    {
        while (j<=right)
        {
            int arr2[n];
            arr2[k]=arr[j];
            j++;
            k++;
        }   
    }
    else {
        while (i<=mid)
        {
            arr[k]=arr[i];
            i++;
            k++;
        }
        
    }
}
void mergeSort(int arr[], int left, int right) {
    if(left<right) { 
        int mid= (left+right)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
    
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
        scanf(" %d", &arr[i]);

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}