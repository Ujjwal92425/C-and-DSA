#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

Node* newNode(int data) {
    Node *node = new Node;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

void traversePre(struct Node *temp) {
    if (temp != NULL) {
        cout << " " << temp->data;
        traversePre(temp->left);
        traversePre(temp->right);
    }
}

void traverseIn(struct Node *temp) {
    if (temp != NULL) {
        traverseIn(temp->left);
        cout << " " << temp->data;
        traverseIn(temp->right);
    }
}

void traversePost(struct Node *temp) {
    if (temp != NULL) {
        traversePost(temp->left);
        traversePost(temp->right);
        cout << " " << temp->data;
    }
}

int main() {
    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);

    cout << "Pre Order " << endl;
    traversePre(root);
    cout << endl;

    cout << "Inorder" << endl;
    traverseIn(root);
    cout << endl;

    cout << "Post Order" << endl;
    traversePost(root);

    return 0;
}
