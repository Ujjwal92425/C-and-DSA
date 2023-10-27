#include<iostream>
using namespace std;
#define MAX_HEAP_SIZE 100
int heap[MAX_HEAP_SIZE];
int heapSize=0;
void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void min_heap(int arr[], int n, int i){
	int smallest=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<n&&arr[left]<arr[smallest])
	smallest=left;
	
	if(right<n&&arr[right]<arr[smallest])
	smallest=right;
	
	if(smallest!=i){
		swap(&arr[i],&arr[smallest]);
		
		min_heap(arr,n,smallest);
	}
}
void insert(int arr[], int *n, int value){
	if(*n==0){
		arr[0]=value;
		(*n)++;
	}
	else{
		arr[(*n)++]=value;
		
		int i=*n-1;
		while(i>0 && arr[(i-1)/2]>arr[i]){
			swap(&arr[i],&arr[(i-1)/2]);
			i=(i-1)/2;
		}
	}
}
int deleteMin(int arr[],int *n){
	if(*n==0){
		cout<<"heap is empty.\n";
		return -1;
	}
	if(*n==1){
		(*n)--;
		return arr[0];
	}
	int root=arr[0];
	arr[0]=arr[(*n)-1];
	(*n)--;
	min_heap(arr,*n,0);
	return root;
}


int main()
{
	int heap[100];
	int heap_size=0;
	int count,i,data;
	cout<<"enter count: ";
	cin>>count;
	
	for(i=0;i<count;i++)
	{
		cout<<"enter data: ";
		cin>>data;
		insert(heap, &heap_size,data);
	}
	cout<<"min heap after insertion: ";
	for(int i=0;i<heap_size;i++)
	{
		cout<<heap[i]<<" ";
	}
	cout<<endl;
	
	
	cout<<"minimum element: "<<deleteMin(heap, &heap_size)<<endl;
	cout<<"min heap after deletion: ";
	for(int i=0;i<heap_size;i++)
	{
		cout<<heap[i]<<" ";
	}
	cout<<endl;
	return 0;
}