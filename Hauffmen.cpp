#include<iostream>
using namespace std;
 
struct Node {
    char data;
    int frequency;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(char data, int frequency) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->frequency = frequency;
    node->left = NULL;
    node->right = NULL;
    return node;
}
struct Node* buildHuffmanTree(struct Node** nodes, int n) {
    while (n > 1) {        
        int min1 = 0, min2 = 1;
        if (nodes[min1]->frequency > nodes[min2]->frequency) {
            int temp = min1;
            min1 = min2;
            min2 = temp;
        }
        for (int i = 2; i < n; i++) {
            if (nodes[i]->frequency < nodes[min1]->frequency) {
                min2 = min1;
                min1 = i;
            } else if (nodes[i]->frequency < nodes[min2]->frequency) {
                min2 = i;
            }
        }        
        struct Node* newNode = createNode('$', nodes[min1]->frequency + nodes[min2]->frequency);
        newNode->left = nodes[min1];
        newNode->right = nodes[min2];

        nodes[min1] = newNode;
        for (int i = min2; i < n - 1; i++) {
            nodes[i] = nodes[i + 1];
        }
        n--;
    }
    return nodes[0];
}
 
void printHuffmanCodes(struct Node* root, int arr[], int top) {
    if (root->left) {
        arr[top] = 0;
        printHuffmanCodes(root->left, arr, top + 1);
    }
    if (root->right) {
        arr[top] = 1;
        printHuffmanCodes(root->right, arr, top + 1);
    }
    if (root->data != '$') {
        cout<<root->data;
        for (int i = 0; i < top; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    char data[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int frequency[] = { 5, 9, 12, 13, 16, 45 };
    int n = sizeof(data) / sizeof(data[0]);

    struct Node* nodes[n];
    for (int i = 0; i < n; i++) {
        nodes[i] = createNode(data[i], frequency[i]);
    }

    struct Node* root = buildHuffmanTree(nodes, n);

    int arr[100], top = 0;
    cout<<"Huffman Codes:\n";
    printHuffmanCodes(root, arr, top);

    return 0;
}