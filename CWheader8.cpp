/*#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node*next;
    struct Node *prev;
};
struct Node *head= NULL, *temp=NULL,*headernode;
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
        newnode -> next=NULL;
        newnode -> prev=NULL;
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
        //cout<<temp->data<<" ";
        temp=temp->next;
        count++;
    }
    cout<<count;
    struct Node * headernode =new Node();
    headernode->data=count;
    headernode->next=head;
    temp = headernode -> next;
    cout<<endl;
    
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl<<"Enter element to search: "<<endl;
    int iteam,count2;
    cin>>iteam;
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        if (iteam==temp->data)
        {
            cout<<"Element Found ";
            count2++;
            break;
        }
        else if (count2==0)
        {
            cout<<"Element Not found";
        }   
    }
    cout<<endl;


   for (int i = count-1; i >=0; i--)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
   }
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
    int count;
    cout<<"Before : "<<endl;
    while (temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        count++;

    }
    
    cout<<endl;
    
    while(temp!=head) {
    
        cout<<temp->data<<" ";
        temp=temp->prev;
    }

    
    
}