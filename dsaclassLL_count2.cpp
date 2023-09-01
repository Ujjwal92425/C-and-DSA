//grounded LL
/*
#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node*next;
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
    
}
*/

//circular LL count
/*
#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL, * temp = NULL, * headernode = NULL;

int main() {
    int choice;
    int count = 0;
    
    cout << "Enter choice: ";
    cin >> choice;
    
    while (choice) {
        struct Node* newnode = new Node();
        cout << "Enter data: ";
        cin >> newnode->data;
        newnode->next = NULL;
        
        if (head == NULL) {
            head = newnode;
            temp = newnode;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }
        
        cout << "Enter choice: ";
        cin >> choice;
    }
    
    temp->next = head; 
    
    temp = head;
    do {
        temp = temp->next;
        count++;
    } while (temp != head);
    
    cout << count << endl;
    
    headernode = new Node();
    headernode->data = count;
    headernode->next = head;
    
    temp = headernode->next;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != headernode->next);
    
    
    return 0;
}
*/
