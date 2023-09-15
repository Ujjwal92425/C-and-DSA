#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    private:
        Node* top;
    public:
        Stack() { top = NULL; }
        void push(int value);
        void pop();
        void display();
        void peek();
};

void Stack::push(int value) {
    Node* newNode = new Node;
    if (!newNode) {
        cout << "Stack overflow";
        exit(1);
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

void Stack::pop() {
    if (top == NULL) {
        cout << "Stack Underflow \n";
        return;
    }
    cout << "Popped element: " << top->data << endl;
    Node* temp = top;
    top = top->next;
    delete temp;
}
void::Stack::peek() {
    cout<<top->data<<endl;

}

void Stack::display() {
    if (top == NULL) {
        cout << "Stack Underflow"<<endl;
        return;
    }
    Node* temp = top;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: 
                cout << "Enter value to be pushed: ";
                cin >> value;
                s.push(value);
                break;
            case 2: 
                s.pop();
                break;
            case 3: 
                s.display();
                break;
            case 4:
                s.peek(); 
                break;
            default: 
                cout << "Invalid choice\n";
        }
    } 
    while(choice != 5);
    return 0;
}
