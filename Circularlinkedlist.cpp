#include<iostream>
using namespace std ;
struct Node{
    int val;
    Node *next;
    Node(int x)
    {
        val=x;
        next=NULL;
    }
};
Node* insert(Node*rear)
{
    int x;
    cin>>x;
    Node *newnode=new Node(x);
    if(rear==NULL)
    {
        
        newnode=newnode->next;  
        rear=newnode; 
        return rear;
    }
    newnode->next=rear->next;
    rear->next=newnode;
    rear=newnode;
    return rear;

}
void display(Node *rear)
{
    if(rear==NULL)
    {
        return ;
    }
    Node*temp=rear->next;
    while(temp!=rear)
    {
        cout<<temp->val;
        temp=temp->next;


    }
    cout<<rear->val;

}
int main()
{

}