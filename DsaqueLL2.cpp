// Implement a program that receives data from sensors and maintains a sorted singly linked list of the data points. Each sensor sends an integer value, and you need to insert these values into the linked list while preserving the sorted order. Display the sorted linked list after each insertion. Avoid storing duplicate values. Your program should be efficient and handle a large number of data points.



// Note: This is a sample question asked in the Samsung interview.

// Input format :
// The input begins with an integer 'n', representing the number of data points received from the sensors.

// This is followed by a single line containing 'n' space-separated integers, representing the data points from the sensors.

// The last line contains a single integer 'newData', representing a new data point to be inserted into the linked list.

// Output format :
// The program should display the sorted linked list after each insertion, separated by spaces.

// Code constraints :
// 1 <= n <= 10^6 (number of data points)

// -10^9 <= data <= 10^9 (sensor data points)

// -10^9 <= newData <= 10^9 (new data point)

// Sample test cases :
// Input 1 :
// 6
// 25 36 47 58 69 80
// 19
// Output 1 :
// Original data points: 25 36 47 58 69 80 
// Updated data points: 19 25 36 47 58 69 80 
// Input 2 :
// 2
// 50 100 
// 75
// Output 2 :
// Original data points: 50 100 
// Updated data points: 50 75 100 

/*
You are tasked with creating a program that processes a linked list containing integer data and rearranges its nodes. Specifically, your program should separate the even and odd integers, placing the even integers before the odd ones while maintaining their original order within each group.



Note: The new nodes are inserted at the beginning of the linked list.



Example



Input:

linked list = 1 2 3 4



Output:

4 2 3 1



Explanation:

Initially, the linked list contains four nodes with the values: 1 2 3 4.

The new nodes are inserted at the beginning of the list. So, after insertion, the nodes will be in the order: 4 3 2 1.

Now, rearrange the linked list to position even numbers before odd numbers while preserving their order.

The resulting rearranged linked list is 4 2 3 1.

Input format :
The first line of input consists of an integer N, representing the number of elements in the linked list.

The second line consists of N space-separated integers, representing the elements in the linked list.

Output format :
The output displays the rearranged list, containing the even numbers followed by the odd numbers.

Sample test cases :
Input 1 :
4
1 2 3 4
Output 1 :
4 2 3 1 
Input 2 :
5
12 15 13 14 16
Output 2 :
16 14 12 13 15 
*/
/*
You are working on a sales data management system. The sales data for each day is represented by two linked lists, where each node contains the sales values. Your task is to calculate the total sales by adding the sales values from the two linked lists and returning the result in a new linked list.



Note: This is the sample question asked in Amazon's recruitment

Input format :
The first line of input consists of an integer N, representing the number of nodes in the first linked list.

The second line consists of N space-separated integers, representing the sales values for each node in the first linked list.

The third line consists of an integer M, representing the number of nodes in the second linked list.

The fourth line consists of M space-separated integers, representing the sales values for each node in the second linked list.

Output format :
The first line of output prints the sales values of the first linked list, separated by space.

The second line of output prints the sales values of the second linked list, separated by space.

The third line prints the total sales, separated by space.



Refer to the sample output for formatting specifications.

Code constraints :
The size of the first linked list (N) and the size of the second linked list (M) are non-negative integers.

Sample test cases :
Input 1 :
2
4 5 
3
3 4 5
Output 1 :
First linked list: 4 5 
Second linked list: 3 4 5 
Total Sales: 3 9 0 
Input 2 :
2
6 3
1
7
Output 2 :
First linked list: 6 3 
Second linked list: 7 
Total Sales: 7 0 
Input 3 :
3
1 3 5
3
2 3 4
Output 3 :
First linked list: 1 3 5 
Second linked list: 2 3 4 
Total Sales: 3 6 9 */
#include <iostream>

// Define a structure for a node in the linked list
struct Node {
    int value;
    Node* next;
    Node(int val) : value(val), next(nullptr) {}
};

// Function to create a linked list from an array of values
Node* createLinkedList(int values[], int n) {
    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < n; i++) {
        Node* newNode = new Node(values[i]);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

// Function to add two linked lists and return a new linked list with the total sales
Node* addLinkedLists(Node* list1, Node* list2) {
    Node* resultHead = nullptr;
    Node* resultTail = nullptr;
    int carry = 0;

    while (list1 || list2 || carry) {
        int value1 = (list1) ? list1->value : 0;
        int value2 = (list2) ? list2->value : 0;

        int total = value1 + value2 + carry;
        carry = total / 10;

        Node* newNode = new Node(total % 10);

        if (!resultHead) {
            resultHead = newNode;
            resultTail = newNode;
        } else {
            resultTail->next = newNode;
            resultTail = newNode;
        }

        if (list1) list1 = list1->next;
        if (list2) list2 = list2->next;
    }

    return resultHead;
}

// Function to print a linked list
void printLinkedList(Node* head) {
    while (head) {
        std::cout << head->value << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    int n, m;
    std::cin >> n;
    int values1[n];
    for (int i = 0; i < n; i++) {
        std::cin >> values1[i];
    }

    std::cin >> m;
    int values2[m];
    for (int i = 0; i < m; i++) {
        std::cin >> values2[i];
    }

    Node* list1 = createLinkedList(values1, n);
    Node* list2 = createLinkedList(values2, m);

    Node* totalSales = addLinkedLists(list1, list2);

    std::cout << "First linked list: ";
    printLinkedList(list1);

    std::cout << "Second linked list: ";
    printLinkedList(list2);

    std::cout << "Total Sales: ";
    printLinkedList(totalSales);

    return 0;
}
