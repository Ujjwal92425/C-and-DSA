//start
/*
#include<iostream>
using namespace std;
struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};
struct Node *head, *temp;
int main()
{
    int choice;
    cout<<"Enter choice:";
    cin>>choice;
    while(choice)
    {
        struct Node *newnode=new Node();
        cout<<"Enter data: ";
        cin>>newnode->data;
        newnode->prev=NULL;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        cout<<"Do you want to continue:(0,1)";
        cin>>choice;
    }
    temp=head;
    cout<<"Before insertion: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    temp=head;
    cout<<endl;

    struct Node *newnode=new Node();
    cout<<"Enter data";
    cin>>newnode->data;
    newnode->prev=NULL;
    newnode->next=NULL;

    newnode->next=temp;
    temp=head=newnode;
    cout<<"After insertion:";
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

struct node {
    struct node* prev;
    int data;
    struct node* next;
};

int main() {
    struct node* head = NULL;

    int choice;
    cout << "Enter 1 to add a node or 0 to stop: ";
    cin >> choice;

    while (choice == 1) {
        struct node* newnode = new node;

        cout << "Enter the element: ";
        cin >> newnode->data;
        newnode->prev = NULL;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
        }
        else {
            struct node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->prev = temp;
        }

        cout << "Do you want to continue(0 to stop and 1 to continue): ";
        cin >> choice;
    }

    // Insert an element at a specified position
    int pos;
    cout << "Enter the position at which you want to insert: ";
    cin >> pos;
    cout << "Enter the element that you want to insert: ";

    int data2;
    cin >> data2 ;

    struct node* temp = head;
    int count = 1; 
    while (count < pos-1) {
        temp = temp->next;
        count++;
    }
    
    if (temp != NULL) { //valid
        struct node* newnode = new node;
        newnode->data = data2;

        newnode->next = temp->next;
        newnode->prev = temp;
        if (temp->next != NULL) {
            temp->next->prev = newnode;
        }
        temp->next = newnode;
    }
    else { 
        cout << "Invalid position" << endl;
    }

    // print 
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}


  //                 * " U J J U " *