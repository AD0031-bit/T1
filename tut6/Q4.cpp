#include<iostream>
#include<queue>
using namespace std;
struct Node{
    int val;
    Node*next;
    Node*child;
    Node(int x)
    {
        val=x;
        child=NULL;
        next=NULL;
    }
    
};
Node *reverse(Node *head)
{
    Node*prev=NULL;
    Node *curr=head;
    Node *newnode=NULL;
    while(curr!=NULL)
    {
        newnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=newnode;
    }
    return prev;


}
void funct(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        if(temp->child!=NULL)
        {
            temp->child=reverse(temp->child);
        }
        temp=temp->next;
    }

}