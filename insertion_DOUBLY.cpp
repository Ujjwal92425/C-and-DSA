#include <iostream>
#include <stdlib.h>
using namespace std;
int main () {
    struct node {
        struct node *next;
        int data;
        struct node *prev;
    };
    struct node *head,*temp,*newnode;
    head=0;
    int n;
    cout<<"Enter size : "<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        cout<<"Enter element "<<i<<" "<<endl;
        cin>>newnode->data;
        newnode->next=NULL;
        newnode->prev=NULL;

        if (head==0)
        {
            head=temp=newnode;
        }
        else {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
    }
    
    temp=head;

    cout<<"Before insertion : "<<endl;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }
    struct node *New=new node;
    int pos,iteam;
    cout<<endl;
    cout<<"Enter the position U want to insert :"<<endl;
    cin>>pos;
    cout<<"Enter the data u want to insert : "<<endl;
    cin>>iteam;
    New->data=iteam;
    if(pos==0){
        New->next=head;
        head=New;
    }
    else {

    temp=head;
    for (int i = 1; i < pos-1; i++)
    {
        temp=temp->next;
        
    }
    New->next=temp->next;
    temp->next=New;
    New->prev=temp;

    }
    
    temp=head;

    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}