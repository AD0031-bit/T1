#include<iostream>
#include<queue>
using namespace std;
struct Node{
    int val;
    Node*down;
    Node*next;
    Node(int v)
    {
        val=v;
        down=NULL;
        next=NULL;
    }
};
Node* addrow()
{
    int n;
    cin>>n;
     Node*head=NULL;
    Node*temp=NULL;

    for(int i=0;i<n;i++)
    {
        int v;
        cin>>v;

        Node*newnode=new Node(v);

        if(head==NULL)
        {
            head=newnode;
            temp=head;
        }
        else
        {
            temp->next=newnode;
            temp=temp->next;
        }
    }

    return head;

}
Node* addList()
{
    int rows;
    cin>>rows;

    Node*head=NULL;
    Node*temp=NULL;

    for(int i=0;i<rows;i++)
    {
        Node*newrow=addrow();

        if(head==NULL)
        {
            head=newrow;
            temp=head;
        }
        else
        {
            temp->down=newrow;
            temp=temp->down;
        }
    }

    return head;
}
void flatten(Node *head)
{
    queue<Node*>q;
    Node*temp=head;
    while(temp!=NULL)
    {
        q.push(temp);
        temp=temp->next;

    }
    while(!q.empty())
    {
        Node*curr=q.front();
        q.pop();
        Node*down=curr->next;
        while(down!=NULL)
        {
            cout<<temp->val<<" ";
            q.push(down);
            down=down->down;
        }

    }
}