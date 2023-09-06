/*You are tasked with implementing a program to manage a singly linked list. Each node in the linked list will store a string value.
 Your goal is to write a function called insertNode() that inserts a new node at a specified position within the linked list.
  The position can be 1 (indicating insertion at the beginning), a positive integer (indicating insertion at the corresponding position),
   or a position greater than the size of the list (indicating appending at the end). Once the insertion is completed, you need to print
    the contents of the updated linked list. Note: This is a sample question asked in a TCS interview. Input format : The first line of input
     consists of an integer n, denoting the number of strings to be inserted initially. The second line of input consists of n string values,
      separated by space for each node in the initial linked list. The third line of input consists of a string denoting the data to be inserted
       into the linked list, and an integer p, denoting the position where the new node is to be inserted. Output format : The first line of 
       output should print the current linked list elements, separated by space. The next line of output should print the updated linked
        list elements, after the insertion, separated by space. Refer to the sample output for formatting specifications. 
        Code constraints : 1 <= n <= 100 1 <= p <= n+1 The string values in the linked list will have at most 100 characters. 
        The position for insertion will be an integer between 1 and the size of the linked list + 1.
         Sample test cases : Input 1 : 6 A B C D E F G 7 
         Output 1 : Current Linked List: A B C D E F 
         Updated Linked List: A B C D E F G 
         Input 2 : 3 Apple Orange Banana Mango 1 
         Output 2 : Current Linked List: Apple Orange Banana 
         Updated Linked List: Mango Apple Orange Banana
          Input 3 : 0 Watermelon 1 
          Output 3 : Current Linked List: Updated Linked List: Watermelon 
          Input 4 : 5 Dog Cat Bird Fish Monkey Lion 6 Output 4 : 
          Current Linked List: Dog Cat Bird Fish Monkey 
          Updated Linked List: Dog Cat Bird Fish Monkey Lion Note : 
          The program will be evaluated only after the “Submit Code” is clicked.
           Extra spaces and new line characters in the program output will result in the failure of the test case.*/

/* #include <iostream>
#include <string>
using namespace std;

struct Node {
    string data;
    Node *next;
};

void printList(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertNode(Node *&head, string data, int pos) {
    Node *newNode = new Node{data, NULL};
    if (pos == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        Node *temp = head;
        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        if (temp != NULL) {
            newNode->next = temp->next;
            temp->next = newNode;
        } else {
            newNode->next = NULL;
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
}

int main() {
    int n, pos;
    string data;
    cin >> n;

    Node *head = NULL, *temp = NULL;

    for (int i = 0; i < n; i++) {
        cin >> data;
        Node *newNode = new Node{data, NULL};
        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    cout << "Current Linked List: ";
    printList(head);

    cin >> data >> pos;

    insertNode(head, data, pos);

    cout << "Updated Linked List: ";
    printList(head);

    return 0;
}


// You are using GCC
#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
    struct node {
        string data;
        struct node *next;
    };
    struct node * head,* newnode,* temp;
    head=0;
    string iteam;
    int n,pos;
    cin >> n;
    for(int i=0;i<n;i++) {
        newnode=(struct node *)malloc(sizeof(struct node));
        cin>>newnode -> data;
        newnode->next=NULL;
        if(head==NULL) {
            head=temp=newnode;
        }
        else {
            temp->next=newnode;
            temp=newnode;
        }
        temp=head;
        cout<<"Current Linked List:"<<endl;
        while(temp!=NULL) {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        
        cout<<endl;
        cin>>iteam>>pos;
        cout<<"Updated Linked List"<<endl;
        if(pos==1) {
            newnode->next=head;
            head=newnode;
            while(temp!=NULL) {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
        else if (pos==n+1) {
            newnode->next=0;
            temp=head;
            while (temp->next!=NULL) {
                temp=temp->next;
            }
            temp->next=newnode;
            while(temp!=NULL) {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
        
        else {
            int j=1;
            temp=head;
            while(j<pos) {
                temp=temp->next;
                j++;}
                
                newnode->next=temp->next;
                temp->next=newnode;
                while (temp!=NULL) {
                    cout<<temp->data<<" ";
                    temp=temp->next;
                }
            }
        }
    }

*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
    struct node {
        int data,n;
        struct node * next;
        struct node *prev;
    };
    struct node *head,* newnode,*temp,*temp2;
    head=0;
    int n;
    cin>>n;
    
        for(int i=0;i<n;i++) {
            newnode =(struct node *)malloc(sizeof(struct node));
            cin>>newnode ->data;
            newnode ->next=NULL;
            newnode ->prev=head;
            if(head==NULL) {
                head=temp=newnode;
            }
            else {
                temp ->next= newnode;
                temp= newnode;
            }
        }
        temp=head;
        cout<<"Created Linked list: ";
        while(temp!=NULL) {
            cout<<temp-> data <<" ";
            temp =temp -> next;
        }
        cout<<endl;
         cout<<"Updated Linked list: ";
         temp2=temp->prev;
        while(temp2!=NULL) {
            cout<<temp2-> data <<" ";
            temp2 =temp2-> prev;
        }
        
}
