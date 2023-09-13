//two way linked list traversal:

#include <iostream>
#include <stdlib.h>
using namespace std;
int main () {
    struct node
    {
        struct node *next;
        int data;
        struct node *prev;
    };
    struct node *head,*temp,*newnode;
    head=0;
    int n;
    cout<<"Size: "<<" ";
    cin>>n;
    for(int i=0;i<n;i++) 
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        cout<<"Enter data : "<<endl;
        cin>>newnode->data;
        
        newnode->next=NULL;
        newnode->prev=NULL;

        if (head==0)
        {
            head=temp=newnode;
        }
        else {
            temp->next=newnode;
            newnode->prev =temp;
            temp=newnode;
        }
    }
    temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}