#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node *front = NULL, *rear = NULL;
struct Node *temp = NULL;

void InsRear()
{
    struct Node *newnode = new Node();
    cout << "Enter the data : " << endl;
    cin >> newnode->data;
    newnode->next = NULL;

    if (front == NULL && rear == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}
void InsFront()
{
    struct Node *newnode = new Node();
    cout << "Enter the data : " << endl;
    cin >> newnode->data;
    newnode->next = NULL;

    if (front == NULL && rear == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        newnode->next = front;
        front = newnode;
    }
}

void DelFront()
{
    temp = front;
    if (rear == NULL)
    {
        cout << "Empty" << endl;
    }
    else if (front == rear)
    {
        front = rear = NULL;
        delete front;
    }
    else
    {
        front = front->next;
        delete temp;
    }
}
void DelRear()
{
    if (front == NULL && rear == NULL)
    {
        cout << "Empty";
    }
    else
    {
        temp = front;
        struct Node *temp2;
        while (temp->next != NULL)
        {
            temp2 = temp;
            temp = temp->next;
        }
        delete temp;
        temp2->next = NULL;
        rear = temp2;
    }
}
void display()
{
    if (front == NULL && rear == NULL)
    {
        cout << "Empty" << endl;
    }
    else
    {
        temp = front;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        temp = front;
        // cout<<endl<<"rear element "<<endl;
        // cout<<rear->data<<endl;
        // cout<<"Front Element "<<endl;
        // cout<<front->data<<endl;
    }
}
int main()
{
    int n;
    cout << "Enter 1 to start" << endl;
    cin >> n;

    while (n)
    {
        cout << endl<< "Enter 1 for Insertation(rear1) ins : " << endl;
        cout << "Enter 2 for Deletion (front) : " << endl;
        cout << "Enter 3 for Deletion (rear) : " << endl;
        cout << "Enter 4 for Insertation (front) : " << endl;
        cout << "Enter 5 for display : " << endl;
        cout << "Enter 6 to exit: " << endl;
        cout << endl;

        int choice;
        cout << "Enter your choice : " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            InsRear();
            break;

        case 2:
            DelFront();
            break;

        case 3:
            DelRear();
            break;

        case 4:
            InsFront();
            break;

        case 5:
            display();
            break;

        case 6:
            return 0;
            break;
            
        default:
            cout << "Wrong Choice " << endl;
            break;
        }
    }
    return 0;
}
