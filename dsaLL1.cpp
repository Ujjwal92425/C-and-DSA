//STATIC LINKED LIST:-

/*
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node * next;
    
};
int main () {
    struct node * temp ,*head;
node * one = new node();
node * two = new node();
node * three = new node();

one->next = two;
two->next =three;
three ->next= NULL;
head = NULL;

one->data=21;
two->data=41;
three->data=51;
head =one;
temp = one;

while (temp !=NULL)
{
    cout<<temp -> data<<" ";
    temp =temp ->next;
}
return 0;
}
*/


//DYNAMIC LINKED LIST:- 

#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

struct node *temp,*head;

int main()
{
    int choice;
    head=NULL;
    cout<<"Enter the choice(0,1);";
    cin>>choice;

    while(choice)
    {
        node *newnode=new node();
        cout<<"Enter data:";
        cin>>newnode->data;
        newnode->next=NULL;

        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else {
            temp=newnode;
            temp=head;
        }
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        return 0;
    }
}