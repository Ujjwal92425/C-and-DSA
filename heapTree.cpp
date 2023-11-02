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

void maxHeap(int index)
{
    while(index > 0 && heap[index]>heap[(index-1)/2])
    {
        swap(&heap[index], &heap[(index-1)/2]);
        index=(index-1)/2;
    }
}

void insert(int value)
{
    if(heapsize>=MAX_HEAP_SIZE)
    {
        cout<<"Heap is full. Cannot insert.\n";
        return;
    }
    heap[heapsize]=value;
    maxHeap(heapsize);
    heapsize++;
}
void heapify(int index)
{
    int leftchild=2 * index + 1;
    int rightchild=2 * index + 2;
    int largest=index;

    if(leftchild<heapsize && heap[leftchild]>heap[largest])
    {
        largest=leftchild;
    }
    if(rightchild<heapsize && heap[rightchild]>heap[largest])
    {
        largest=rightchild;
    }
    if(largest!=index)
    {
        swap(&heap[index], &heap[largest]);
        heapify(largest);
    }
}

int deleteMax()
{
    if(heapsize==0)
    {
        cout<<"Heap is empty.cannot delete.\n";
        return -1;
    }
    int deletedValue=heap[0];
    heap[0]=heap[heapsize-1];
    heapsize--;
    heapify(0);
    return deletedValue;
}

int main()
{
    int count, i, data;
    cout<<"Enter count";
    cin>>count;

    for(i=0;i<count;i++)
    
    {
        cout<<"Enter data";
        cin>>data;
        insert(data);
    }
    
   cout<<"Max heap after insertions: ";
   for(int i=0;i<heapsize;i++)
   {
       cout<<heap[i]<<" ";
   }
   cout<<endl;

   int max=deleteMax();
   cout<<"Deleted max element: "<<max<<endl;
   cout<<"Max heap after deletion: ";
   for(int i=0;i<heapsize;i++)
   {
       cout<<heap[i]<<" ";
   }
   cout<<endl;
   
   return 0;
}
