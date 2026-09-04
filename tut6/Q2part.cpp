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
    if(head==NULL)
    {
        return ;
    }
    cout<<head->val<<" ";
    if(head->child!=NULL)
    {
        flat(head->child);
    }
    flat(head->next);
}
