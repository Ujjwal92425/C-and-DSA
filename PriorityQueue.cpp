#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    int priority;
    struct Node*next;
};
struct Node *front=NULL, *rear=NULL;
struct Node *temp=NULL;

void enqueue() {
    struct Node * newnode = new Node();
    cout<<"Enter the data : "<<endl;
    cin>>newnode->data;
    cout<<"Enter the priority : "<<endl;
    cin>>newnode->priority;
    
    newnode->next=NULL;

    if (front==NULL && rear==NULL)
    {
        front=rear=newnode;
    }
    else {
        if (newnode->priority <= front->priority) {
            newnode->next = front;
            front = newnode;
        } 
        else if (newnode->priority > rear->priority) {
            rear->next = newnode;
            rear = newnode;
        } 
        else {
            Node *temp = front;
            while (temp->next != NULL && temp->next->priority < newnode->priority) {
                temp= temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }
}

void dequeue() {
    temp=front;
    if (rear==NULL)
    {
        cout<<"Empty"<<endl; 
    }
    else if (front==rear) {
        front=rear=NULL;
    }
    else {
        front=front->next;
        delete temp;
    }
}
void display() {
    if (front==NULL && rear ==NULL)
    {
        cout<<"Empty"<<endl;
    }
    else {
        temp=front;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        temp=front;
        cout<<endl<<"rear element "<<endl;
        cout<<rear->data<<endl; 
        cout<<"Front Element "<<endl;
        cout<<front->data<<endl;   
    }   
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
            enqueue();
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
