// #include <iostream>
// #include <stdlib.h>
// using namespace std;
// int main () {
//     struct node {
//         struct node *next;
//         int data;
//     };
//     struct node *head,*temp,*newnode;
//     head=0;
//     int n;
//     cout<<"Enter size : "<<endl;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         newnode=(struct node *)malloc(sizeof(struct node));
//         cout<<"Enter element "<<i<<" "<<endl;
//         cin>>newnode->data;
//         newnode->next=NULL;

//         if (head==0)
//         {
//             head=temp=newnode;
//         }
//         else {
//             temp->next=newnode;
//             temp=newnode;
//         }
//     }
    
//     temp=head;
//     cout<<"Before insertion : "<<endl;
//     while (temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     struct node *New=new node;
//     int pos,item;
//     cout<<endl;
//     cout<<"Enter the position U want to insert :"<<endl;
//     cin>>pos;
//     cout<<"Enter the data u want to insert : "<<endl;
//     cin>>item;
//     New->data=item;
//     if(pos==0){
//         New->next=head;
//         head=New;
//     }
//     else {

//     temp=head;
//     for (int i = 1; i < pos-1; i++)
//     {
//         temp=temp->next;
        
//     }
//     New->next=temp->next;
//     temp->next=New;
//     }
    
//     temp=head;

//     while (temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
#include <iostream>
using namespace std;
int main () {
    int number,i,size,j;
    cin>>number;
    for ( i = 0; i < number; i++)
    {
        cin>>size;
        int x=0;
        int arri[size];
        x=x+size;
        for ( j = 0; j< size; j++)
        {
            cin>>arri[j];
            
        }
        for ( j = 0; j< size; j++)
        {
            cout<<arri[j]<<" ";
            
        }   
        
    }
    
}