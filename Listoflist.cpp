#include<iostream>
using namespace std;
struct Node2{
    string val;
    Node2*next;
  
    Node2(string v)
    {
        val=v;
        next=NULL;
       
    }

};
struct Node1
{
    string val;
    Node2*next;
    Node1*side;
    Node1(string v)
    {
        val=v;
        next=NULL;
        side=NULL;
    }

};

Node1* add_List1()
{
    int n;
    cin>>n;
    Node1*head=new Node1(" ");
    Node1*temp=head;
    for(int i=0;i<n;i++)
    {
        string v;
        cin>>v;  
        temp->val=v;
        temp->side=new Node1(" ");
        temp=temp->side;
    }
    return head;
}
Node1* add_List2(Node1*head)
{
    int n;
    cin>>n;
    string v;
    cin>>v;
    Node2*newnode=new Node2(v);
    Node1*temp=head;
    for(int i=1;i<n;i++)
    {
        temp=temp->side;
    }
    if(temp->next==NULL)
    {
        temp->next=newnode;
    }
    else{
        Node2*temp2=temp->next;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }
        temp2->next=newnode;

    }
    return head;
}