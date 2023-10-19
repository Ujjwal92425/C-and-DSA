#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int value): data(value),left(nullptr),right(nullptr){}
};
Node* insert(Node* root, int value)
{
    if(root==nullptr)
    {
        return new Node(value);
    }
    if(value<root->data)
    {
        root->left=insert(root->left, value);
    }
    else if (value>root->data)
    {
        root->right=insert(root->right,value);
    }
    return root;
}

void inorderTraversal(Node* root)
{
    if(root!=nullptr)
    {
        inorderTraversal(root->left);
        cout<<root->data<<" ";
        inorderTraversal(root->right);
    }
}
void preorderTraversal(Node *root)
{
    if(root!=nullptr)
    {
        cout<<root->data<<" ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}
void postorderTraversal(Node *root)
{
    if(root!=nullptr)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout<<root->data<<" ";
    }
}
bool search(Node* root, int value)
{
    if (root == nullptr)
    {
        return false;
    }
    if(root->data==value)
    {
        return true;
    }
    else if(value < root->data)
    {
        return search(root->left, value);
    }
    else
    {
        return search(root->right, value);
    }
}
Node* findMin(Node* root)
{
    while(root->left!=nullptr)
    {
        root=root->left;
    }
    return root;
}
Node* deleteNode(Node* root, int val)
{
    if(root==nullptr)
    {
        return root;
    }
    if(val < root->data)
    {
        root->left=deleteNode(root->left,val);
    }
    else if (val>root->data)
    {
        root->right=deleteNode(root->right,val);
    }
    else{
        if(root->left==nullptr)
        {
            Node* temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==nullptr)
        {
            Node* temp=root->left;
            delete root;
            return temp;
        }
        Node* temp=findMin(root->right);
        root->data=temp->data;
        root->right=deleteNode(root->right, temp->data);
    }
    return root;
}

int main()
{
    Node* root=nullptr;
    int x,r;
    cout<<"Enter Root Node: ";
    cin>>r;
    root=insert(root,r);
    cout<<"Enter data:";
    cin>>x;

    while(x>0)
    {
        insert(root,x);
        cout<<"Enter data:";
        cin>>x;
    }
    cout<<"Preorder Traversal:";
    preorderTraversal(root);
    cout<<endl;
    cout<<"Inorder Traversal:";
    inorderTraversal(root);
    cout<<endl;
    cout<<"Postorder Traversal:";
    postorderTraversal(root);
    cout<<endl;

    int searchvalue;
    cout<<"Enter value to search: ";
    cin>>searchvalue;

    if(search(root,searchvalue))
    {
        cout<<searchvalue<<"found in the tree"<<endl;
    }
    else{
        cout<<searchvalue<<"not found in the tree"<<endl;
    }

    int delnode;
    cout<<"Enter data you want to delete: ";
    cin>>delnode;

    root=deleteNode(root, delnode);
}
