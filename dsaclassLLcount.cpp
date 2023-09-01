/*
//insertion
#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node*next;
};
struct Node *head=NULL, *temp=NULL;
int main()
{
    int choice;
    cout<<"Enter choice: ";
    cin>>choice;
    while(choice)
    {
        struct Node*newnode=new Node();
        cout<<"Enter data: ";
        cin>>newnode->data;
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        cout<<"Enter choice: ";
        cin>>choice;
    }
    temp=head;
    cout<<"Before insertion: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    int pos, i=1;
    temp=head;
    cout<<"Enter position: ";
    cin>>pos;
    while(i<pos)
    {
        temp=temp->next;
        i++;
        
    }
    
    struct Node*newnode=new Node();
    cout<<"Enter data: ";
    cin>>newnode->data;
    newnode->next=temp->next;
    temp->next=newnode;
    
    temp=head;
    
    cout<<"After Insertion: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }
    return 0;
}
*/

#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node*next;
};
struct Node *head=NULL, *temp=NULL;
int main()
{
    int choice;
    int count=0;
    cout<<"Enter choice: ";
    cin>>choice;
    while(choice)
    {
        struct Node*newnode=new Node();
        cout<<"Enter data: ";
        cin>>newnode->data;
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        cout<<"Enter choice: ";
        cin>>choice;
    }
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        count++;
    }
    cout<<endl;
    cout<<count;
}

