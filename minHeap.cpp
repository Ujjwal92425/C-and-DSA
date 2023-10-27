#include<iostream>
using namespace std;
#define MAX_HEAP_SIZE 100
int heap[MAX_HEAP_SIZE];
int heapsize=0;

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void min_heap(int arr[],int n,int i ) {
    int smallest=i;
    int left=2*i+1;
    int right=2*i+2;

    if (left < n && arr[left] < arr[smallest]) {
        smallest=left;
    }
    if (right < n && arr[right] < arr[smallest])
    {
        smallest=right;
    }
    if (smallest != 1)
    {
        swap(&arr[i],&arr[smallest]);

        min_heap(arr,n,smallest);
    }
}

// void insert(int value)
// {
//     if(heapsize>=MAX_HEAP_SIZE)
//     {
//         cout<<"Heap is full. Cannot insert.\n";
//         return;
//     }
//     heap[heapsize]=value;
//     min_heap();
//     heapsize++;
// }  WRONG FUNCTION 


void insert(int arr[], int *n, int value)
{
    if(*n==0)
    {
        arr[0]=value;
        (*n)++;
    }
    else
    {
        arr[(*n)++]=value;

        int i=*n-1;;
        while(i>0 && arr[(i-1)/2] > arr[i])
        {
            swap(&arr[i], &arr[(i-1)/2]);
            i=(i-1)/2;
        }
    }
}
int deleteMin(int arr[], int *n)
{
    if(*n==0)
    {
        cout<<"Heap is empty.\n";
        return -1;
    }
    if(*n==1)
    {
        (*n)--;
        return arr[0];
    }

    int root =arr[0];
    arr[0]=arr[(*n) -1];
    arr[0]=arr[(*n)-1];
    (*n)--;

    min_heap(arr,*n,0);
    return root;
    
}

void heapify(int index)
{
    int leftchild=2 * index + 1;
    int rightchild=2 * index + 2;
    int smallest=index;

    if(leftchild<heapsize && heap[leftchild]>heap[smallest])
    {
        smallest=leftchild;
    }
    if(rightchild<heapsize && heap[rightchild]>heap[smallest])
    {
        smallest=rightchild;
    }
    if(smallest!=index)
    {
        swap(&heap[index], &heap[smallest]);
        heapify(smallest);
    }
}
int main()
{
    int count, i, value,n;
    cout<<"Enter count";
    cin>>count;

    for(i=0;i<count;i++)
    {
        cout<<"Enter data";
        cin>>value;
        insert(value);
    }
    cout<<"Min heap after inbsertions: ";
    for(int i=0;i<heapsize;i++)
    {
        cout<<heap[i]<<" ";
    }
    cout<<endl;
}

