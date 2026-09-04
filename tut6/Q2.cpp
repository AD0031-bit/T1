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
void flat (Node*head)
{
    queue<Node*>q;
    Node*temp=head;
    while(temp!=NULL)
    {
        
        q.push(temp);
        temp=temp->next;
    }
    cout<<endl;
    while(!q.empty())
    {Node*curr=q.front();
    q.pop();
        cout<<curr->val<<" ";
        if(curr->child!=NULL)
    {Node*temp2=curr->child;
    while(temp2!=NULL)
    {
        
        q.push(temp2);
        temp2=temp2->next;
    }}}


}
