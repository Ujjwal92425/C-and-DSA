//begnning deletion
/*
#include<iostream>
using namespace std;

struct node {
    struct node* prev;
    int data;
    struct node* next;
};
struct node* head,*temp;
int main() {
    

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

        cout << "Do you want to continue(0 to stop and 1 to continue): "<<endl;
        cin >> choice;
    }
    temp=head;
    cout<<"Before : "<<endl;
    while (temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;

    head=head->next;
    delete temp;
    temp =head;
    temp->prev=NULL;
    temp = head;
    cout<<"after: "<<endl;
    while (temp !=NULL)
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
struct node* head,*temp;
int main() {

    int pos;
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

        cout << "Do you want to continue(0 to stop and 1 to continue): "<<endl;
        cin >> choice;
    }

    temp=head;
    cout<<"Before : "<<endl;
    while (temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
    cout<<"Enter Position: "<<endl;
    cin>>pos;

    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete temp;

    temp=head;
    
    cout<<"after: "<<endl;

    while (temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    return 0;

    
}