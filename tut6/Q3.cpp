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
void flat (Node*head,int level,int count[])
{
    if(head==NULL)
    {
        return;
    }
    Node*temp=head;
    while(temp!=NULL)
    {count[level]++;
        if(temp->child!=NULL)
        {
            flat(temp->child,level++,count);
        }
temp=temp->next;
    }

}
