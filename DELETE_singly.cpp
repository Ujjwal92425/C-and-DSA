#include <iostream>
#include <stdlib.h>
#include<bits/stdc++.h>

using namespace std;
int main () {
    struct node {
        struct node *next;
        int data;
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

        if (head==0)
        {
            head=temp=newnode;
        }
        else {
            temp->next=newnode;
            temp=newnode;
        }
    }
    
    temp=head;
    cout<<"Before deletion : "<<endl;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    temp=head;
    
    int pos;
    cout<<endl;
    cout<<"Enter the position U want to delete :"<<endl;
    cin>>pos;
    struct node *prev;

    if(pos==0){
        head=temp->next;
        
    }
    else {

    //temp=head;
    for (int i = 1; i <= pos-1; i++)
    {
        prev=temp;
        temp=temp->next;

        
    }
    prev->next=temp->next;

    }
    
    temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
