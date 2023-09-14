#include <iostream>
using namespace std;
int main () {
    int top=-1;
    int n,i;
    cout<<"Enter the size of Stack : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of stack "<<endl;
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
        top++;
    }
    
    while(true) {
        cout<<"Enter 1 for Push() : "<<endl;
        cout<<"Enter 2 for Pop() : "<<endl;
        cout<<"Enter 3 for Peek() : "<<endl;
        cout<<"Enter 4 for display() : "<<endl;
        cout<<"Enter 5 for exit() : "<<endl;
        int choice;
        cout<<"Enter your choice : "<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            if(top==n) {
                cout<<"Stack is Full";
            }
            else{
                int data;
                cout<< " enter the data to insert " <<endl;
                cin>>data;
                arr[n-1]=data;
                top++;
            }
            break;
        case 2:
            if(top==-1) {
                cout<<"Stack underflow"<<endl;
            }
            else{
                top--;
            }
            break;
        case 3: 
            if (top==-1)
            {
                cout<<"Stack is empty"<<endl;
            }
            else {
                cout<<arr[top];
            }
            break;
        case 4: 
            if(top==-1) {
                cout<<"Stack is empty"<<endl;
            }
            else {
                for ( i = top; i >=0; i--)
                {
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
            break;
        case 5: 
            return 0; 
        default:
            cout<<"Wrong Choice "<<endl;
            break;
        }  
    }  
}
