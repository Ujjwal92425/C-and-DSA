#include <iostream>
using namespace std;

#define N 5
int front=-1;
int rear=-1;
int temp=front;
int queue[N];

void inqueue() {
    int x;
    if (rear == N-1)
    {
        cout<<"Overflow"<<endl;;
    }
    else if (front ==-1 && rear==-1)
    {
        cout<<"Enter Data"<<endl;
        cin>>x;
        front=rear=0;
        queue[rear]=x;
    }
    else {
        cout<<"Enter Data"<<endl;
        cin>>x;
        rear=(rear+1)%N;
        queue[rear]=x;
    }
}
    void dequeue () {
        if (rear==-1)
        {
            cout<<"Empty"<<endl;
        }
        else if (front==rear) 
        {
            front=rear=-1;
        }
        else {
            front++;
        }   
    }

    void display () {
        
        for (int i = front; i <= rear; i++)
        {
            cout<<queue[i]<<" ";
            rear=(rear+1)%N;
        }
        cout<<endl<<"Rear Element : "<<queue[rear]<<endl;
        
    } 

    int main () {
        int n;
        cout<<"Enter 1 to start"<<endl;
        cin>>n;
        while(n) {
        cout<<endl<<"Enter 1 for enqueue : "<<endl;
        cout<<"Enter 2 for dequeue : "<<endl;
        cout<<"Enter 3 for display : "<<endl;
        cout<<"Enter 4 to exit: "<<endl;
        cout<<endl;
        int choice;
        cout<<"Enter your choice : "<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            inqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3: 
            display();
            break;
        case 4: 
            return 0;
            break; 
        default:
            cout<<"Wrong Choice "<<endl;
            break;
        }  
    }  
    return 0;
}
  
    
