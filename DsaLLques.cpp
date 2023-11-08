// Kamal wants to create a linked list and
// perform the following operations on it:
// Write a program that takes the number of
// nodes to be inserted, followed by their values,
// as input. After inserting the nodes, the
// program should ask for a new value and
// append a node with that value at the end of
// the linked list. Finally, the program should print
// the contents of the linked list.
// Example
// Input:
// 5
// 1 2 3 4 5
// 6
// Output:
// Created Linked list: 5 4 3 2 1
// Final list: 5 4 3 2 1 6
// Explanation:
// The program first creates a linked list by
// inserting nodes at the beginning. The input
// specifies that there are 5 nodes, and their
// values are 1, 2, 3, 4, and 5. After inserting
// these nodes, the program asks for a new
// Insert a node at the beginning of the linked list.
// Append a node at the end of the linked list.
// Print the final linked list.
// value, which is 6. It then appends a node with
// the value 6 at the end of the linked list. Finally,
// the program prints the contents of the linked
// list, which are 5, 4, 3, 2, 1, and 6 in that order.
// Note: This is a sample question asked in
// Capgemini recruitment.
// Input format :
// The first line consists of an integer, n, representing the number of nodes to be initially inserted into the linked list.
// The second line of input consists of n space-separated integers, representing the elements of the linked list.
// The third line of input consists of an integer, m, representing the value of the new node to be inserted at the end of the linked list.
// Output format :
// The first line of output prints the initial linked list elements, separated by space.
// The second line of output prints the final linked list elements, after inserting the new node, separated by space.
// Refer to the sample output for formatting specifications.
// Code constraints :
// The linked list can contain up to 10 nodes.
// The data for each node is an integer.

// Input 1 :
// 5
// 1 2 3 4 5
// 6
// Output 1 :
// Created Linked list : 5 4 3 2 1
// Final list: 5 4 3 2 1 6
// Input 2 :
// 3
// 10 20 30
// 40
// Output 2 :
// Created Linked list : 30 10 20
// Final list: 30 20 10 40

// You are using GCC
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// void insertAtBeginning(Node** head, int data) {
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->next = *head;
//     *head = newNode;
// }

// void append(Node** head, int data) {
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->next = NULL;

//     if (*head == NULL) {
//         *head = newNode;
//         return;
//     }

//     Node* last = *head;
//     while (last->next != NULL) {
//         last = last->next;
//     }

//     last->next = newNode;
// }

// void printList(Node* node) {
//     while (node != NULL) {
//         cout << node->data << " ";
//         node = node->next;
//     }
// }

// int main() {
//     Node* head = NULL;

//     int n, value, newValue;
    
//     cin >> n;
    
//     for(int i=0; i<n; i++) {
//         cin >> value;
//         insertAtBeginning(&head, value);
//     }
    
//     cout << "Created Linked list: ";
//     printList(head);
    
//     cin >> newValue;
    
//     append(&head, newValue);
    
//     cout << "\nFinal list: ";
//     printList(head);
    
//     return 0;
// }



/*

Vijay wants to create a program that allows
him to manipulate a linked list.
He wants to be able to perform the following
operations:
1: Append Left: Append a node at the
beginning(left) of the linked list.
2: Append Right: Append a node at the
end(right) of the linked list.
3: Print: Print the contents of the linked list.
4: Exit: Exit the program.
Note: This is a sample question asked in
Accenture recruitment.
Input format :
For inserting a node at the beginning of the linked list, input: 1 followed by the value
For inserting at the end of the linked list, input: 2 followed by the value
To display the current linked list, input: 3
To exit the program, input: 4
Output format :
The program displays the following outputs based on the inputs provided:
If the choice is 3: "Linked List: [values separated by space]"
If the choice is 4: The program exits.
If the choice is invalid: "Invalid choice"
Code constraints :
The input values for the linked list nodes will be non-negative integers.
Sample test cases :
Input 1 :
1 10
2 20
3
4

Output 1 :
Linked List: 10 20
Input 2 :
1 10
1 20
1 30
2 35
3 
4

Output 2 :
Linked List: 30 20 10 35
Input 3 :
5
4
Output 3 :
Invalid choice

*/


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void appendLeft(Node** head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void appendRight(Node** head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }

    last->next = newNode;
}

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

int main() {
    Node* head = NULL;

    while (true) {
        int choice, value;
        cout << "Enter your choice (1: Append Left, 2: Append Right, 3: Print, 4: Exit): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to be appended at the beginning: ";
                cin >> value;
                appendLeft(&head, value);
                break;

            case 2:
                cout << "Enter the value to be appended at the end: ";
                cin >> value;
                appendRight(&head, value);
                break;

            case 3:
                cout << "Linked List: ";
                printList(head);
                cout << endl;
                break;

            case 4:
                exit(0);

            default:
                cout << "Invalid choice" << endl;
        }
    }

    return 0;
}
