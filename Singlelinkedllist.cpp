#include<iostream>
using namespace std;
struct Node{
    int val;
    Node*next;
    Node(int x)
    {
        val=x;
        next=NULL;
    }
};
void insert(int x,Node *head)
{
   
  
    Node*temp=head;
   while(temp!=NULL&&temp->next!=NULL)
   {
    if(temp->val==temp->next->val)
    {
         Node *newnode =new Node(x);
        newnode->next=temp->next;
        temp->next=newnode;
        temp=temp->next->next;
    }
    temp=temp->next;
   }

}
void display(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
Node* delete_(Node*head)
{
    if(head==NULL)
    {
        return head;
    }
  Node *temp=head;
  while(temp->next->next!=NULL)
  {
   temp=temp->next; 
  }
  Node*curr=temp->next;
  temp->next=NULL;
  delete curr;
  return head;
}
Node *reverse(Node *head)
{
    Node*prev=NULL;
    Node *nextnode=NULL;
    Node *curr=head;
    while(curr!=NULL)
    {
        nextnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
    }
    return prev;
}
int main()
{
    Node *head=new Node(0);
    Node*temp=head;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int v;
        cin>>v;
       temp->val=v;
       temp->next=new Node(0);
       temp=temp->next;
    }
   
    
   
    head=reverse(head);
    display(head);
}
