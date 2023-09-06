// insertion at the end:
// #include<iostream>
// using namespace std;

// struct node{
// struct node *prev;
// int data;
// struct node *next;
// };

// int main()
// {
// struct node *head,*newnode,*temp;
// head = 0;
 

// int choice = 1;
// while(choice==1)
// {
// newnode = (struct node *)malloc(sizeof(struct node));


// printf("Enter the element : ");
// scanf("%d",&newnode->data);
// newnode->prev=0;
// newnode->next = 0;
// if(head == 0)
// {
// head =temp= newnode;
// }else{
// temp->next = newnode;
// newnode->prev=temp;
// temp = temp->next;
// }
// printf("Do you want to continue(0 to stop and 1 to continue) : ");
// scanf("%d",&choice);
// }
// newnode=(struct node *)malloc(sizeof(struct node));
 
// cout<<"Enter the element for the last: ";
// scanf("%d",&newnode->data);
// temp=head;
// while(temp->next!=NULL){
//    temp=temp->next;

// }
// temp->next=newnode;
// newnode->prev=temp;
// newnode->next=NULL;
 
// //Traverse
// temp = head;
// while(temp != 0)
// {
// printf("%d ",temp->data);
// temp = temp->next;
// }
// return 0;

// }




//insertion after specific position:
#include<iostream>
using namespace std;

struct node{
struct node *prev;
int data;
struct node *next;
};

int main()   {
struct node *head,*newnode,*temp;
head = 0;
 

int choice = 1;
while(choice==1)
{
newnode = (struct node *)malloc(sizeof(struct node));


printf("Enter the element : ");
cin>>newnode->data;
newnode->prev=0;
newnode->next = 0;

if(head == 0)
{
head =temp= newnode;
}
else{
temp->next = newnode;
newnode->prev=temp;
temp = temp->next;
}
}
cout<<"Do you want to continue(0 to stop and 1 to continue) : ";
cin>>choice;
newnode=(struct node *)malloc(sizeof(struct node));
int x;
cout<<"Enter the element after which u want to insert: ";
cin>>x;
cout<<"Enter the element that u want to insert: ";

cin>>newnode->data;

temp=head;
while(temp->data!=x){
   temp=temp->next;

}
newnode->next=temp->next;
newnode->prev=temp;
temp->next=newnode;
newnode->next->prev=newnode;
 
//Traverse
temp = head;
while(temp != 0)
{
printf("%d ",temp->data);
temp = temp->next;
}
return 0;

}


// deletion at the begining:
// #include<iostream>
// using namespace std;

// struct node{
// struct node *prev;
// int data;
// struct node *next;
// };

// int main()   
// {
// struct node *head,*newnode,*temp;
// head = 0;
 

// int choice = 1;
// while(choice==1)
// {
// newnode = (struct node *)malloc(sizeof(struct node));


// printf("Enter the element : ");
// scanf("%d",&newnode->data);
// newnode->prev=0;
// newnode->next = 0;
// if(head == 0)
// {
// head =temp= newnode;
// }else{
// temp->next = newnode;
// newnode->prev=temp;
// temp = temp->next;
// }
// printf("Do you want to continue(0 to stop and 1 to continue) : ");
// scanf("%d",&choice);
// }
// struct node*p=head;
// head=head->next;
// head->prev=NULL;
// free(p);
// p=NULL;
 
// //Traverse
// temp = head;
// while(temp != 0)
// {
// printf("%d ",temp->data);
// temp = temp->next;
// }
// return 0;

// }


// deletion from the end:
// #include<iostream>
// using namespace std;

// struct node{
// struct node *prev;
// int data;
// struct node *next;
// };

// int main()   
// {
// struct node *head,*newnode,*temp;
// head = 0;
 

// int choice = 1;
// while(choice==1)
// {
// newnode = (struct node *)malloc(sizeof(struct node));


// printf("Enter the element : ");
// scanf("%d",&newnode->data);
// newnode->prev=0;
// newnode->next = 0;
// if(head == 0)
// {
// head =temp= newnode;
// }else{
// temp->next = newnode;
// newnode->prev=temp;
// temp = temp->next;
// }
// printf("Do you want to continue(0 to stop and 1 to continue) : ");
// scanf("%d",&choice);
// }
// newnode=(struct node *)malloc(sizeof(struct node));
 

// temp=head;
// while(temp->next!=NULL){
//    temp=temp->next;

// }
// temp->prev->next=NULL;
// free(temp);
// temp=0;
 
 
// //Traverse
// temp = head;
// while(temp != 0)
// {
// printf("%d ",temp->data);
// temp = temp->next;
// }
// return 0;

// }


// deletion from specific position:

// #include<iostream>
// using namespace std;

// struct node{
// struct node *prev;
// int data;
// struct node *next;
// };

// int main()   
// {
// struct node *head,*newnode,*temp;
// head = 0;
 

// int choice = 1;
// while(choice==1)
// {
// newnode = (struct node *)malloc(sizeof(struct node));


// printf("Enter the element : ");
// scanf("%d",&newnode->data);
// newnode->prev=0;
// newnode->next = 0;
// if(head == 0)
// {
// head =temp= newnode;
// }else{
// temp->next = newnode;
// newnode->prev=temp;
// temp = temp->next;
// }
// printf("Do you want to continue(0 to stop and 1 to continue) : ");
// scanf("%d",&choice);
// }
// newnode=(struct node *)malloc(sizeof(struct node));
// cout<<"Enter the element that u want to delete: ";
// scanf("%d",&newnode->data);

// temp=head;
// while(temp->data!=newnode->data){
//    temp=temp->next;

// }
// temp->prev->next=temp->next;
// temp->next->prev=temp->prev;
// free(temp);
// temp=0;
 
 
// //Traverse
// temp = head;
// while(temp != 0)
// {
// printf("%d ",temp->data);
// temp = temp->next;
// }
// return 0;

// }