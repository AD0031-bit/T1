#include<iostream>
using namespace std;
struct Node {
    int val;
    Node *next;
    Node*prev;
    Node(int x)
    {
        prev=NULL;
        next=NULL;
        val=x;
    }
};
Node* insert_front(Node *head)
{
    int x;
    cin>>x;
    Node *newnode=new Node(x);
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
    return head;
}
Node* insert_last(Node *head)
{
    int x;
    cin>>x;
    Node *newnode=new Node(x);
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    return head;
}
Node* insert(Node *head)
{
    int x;
    cin>>x;
    int p;
    cin>>p;
    Node *newnode=new Node(x);
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    Node*temp=head;
   for(int i=0;i<p-1;i++)
   {
    temp=temp->next;
   }
   newnode->next=temp->next;
   if(temp->next!=NULL)
{
    temp->next->prev=newnode;
}
 
   temp->next=newnode;
   newnode->prev=temp;
   return head;

}
Node *deletion_atstart(Node*head)
{
    if(head==NULL)
    {
        return head;
    }
    Node*curr=head;
    head=head->next;
    head->prev=NULL;
    delete curr;
}
Node *deletion_atlat(Node*head)
{
     if(head==NULL)
    {
        return head;
    }
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    Node*curr=temp;
    temp->prev->next=NULL;
  
    delete curr;
    return head;

}
int main()
{

}

