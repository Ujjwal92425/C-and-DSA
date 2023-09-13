//singly Linked List : 

#include <iostream>
#include<stdlib.h>
using namespace std;
int main () {
    struct node {
        struct node *next;
        int data;
    };
    struct node *head,*temp,*newnode;
    head=0;int choice;
    while (choice)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        cout<<"Enter The Data "<<endl;
        cin>>newnode->data;

        newnode->next =NULL;

        if (head==0)
        {
            head=temp=newnode;
        }
        else {
            temp->next=newnode;
            temp=newnode;
        }
        cout<<"Do you want to continue ( 0 for no)" <<endl;
        cin>>choice;  
    }
    temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}