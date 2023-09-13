#include <iostream>
#include<stdlib.h>
using namespace std;
int main () {
    struct node
    {
        struct node *next;
        int data;
    };
    struct node *head=0,*temp,*newnode;
    cout<<"Enter size : "<<endl;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        cout<<"Enter data "<<i+1<<endl;
        cin>>newnode->data;
        newnode->next=NULL;
        temp=head;

        if (head==0)
        {
            head=temp=newnode;
        }
        else {
            while(temp->next!=0){
                temp=temp->next;
            }
            temp->next=newnode;
             
        }
    }
    temp=head;
    cout<<"Linked List : "<<endl;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    temp=head;
    cout<<endl;
    int pos, item;
    struct node *New=new node;
    cout<<"Enter the pos u want to insert : "<<endl;
    cin>>pos;
    cout<<"Enter the data u want to insert : "<<endl;
    cin>>item;
    New->data=item;
    
    if (pos==0)
    {
        New->next=head;
        head=New;
    }
    else {
        temp=head;
        for (int i = 1; i < pos-1; i++)
        {
            temp=temp->next;
        }
        
        New ->next=temp->next;
        temp->next=New;
    }
    temp=head;
    cout<<"Linked List after insertion : "<<endl;
    while (temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    temp=head;
    cout<<endl;

//deletion


    struct node *prev;
    int pos2;
    cout<<"Enter the pos u want to delete : "<<endl;
    cin>>pos2;
    if (pos2==0)
    {
        head=temp->next;

    }
    else {
        for (int i = 0; i <= pos2-1; i++)
        {
            prev=temp;
            temp=temp->next;         
        }
        prev->next=temp->next;   
    }
    temp=head;
    cout<<"Linked List  after deletion : "<<endl;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }   
 }