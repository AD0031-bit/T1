#include<iostream>
using namespace std;
# define m 10
struct Node{
    int val;
    Node *next;
    Node(int x)
    {
        val=x;
        next=NULL;
    }
};
int count=0;
Node * hashtable[m];
void hashing(int key)
{
    int i=key%m;
    Node *newnode=new Node(key);
    if(hashtable[i]==NULL)
    {
        hashtable[i]=newnode;
    }
    else{
        newnode->next=hashtable[i];
        hashtable[i]=newnode;
    }
    count++;
}
bool search(int key)
{
    int i=key%m;
    if(hashtable[i]==NULL)
    {
        return false;
    }
    else{
        Node *temp=hashtable[i];
      while(temp!=NULL)
      {
        if(temp->val==key)
        {
            return true;
        }
        temp=temp->next;
      }
      return false;
    }
}
void delete_(int key)
{
     int i=key%m;
    if(hashtable[i]==NULL)
    {
        return ;
    }
    else{
        Node *temp=hashtable[i];
        if(temp->val==key)
        {
            hashtable[i]=hashtable[i]->next;
            delete temp;
            count--;
            return ;
        }
      while(temp->next!=NULL)
      {
        if(temp->next->val==key)
        {
            Node*curr=temp->next;
            temp->next=temp->next->next;
            delete curr;
            count--;
            return;
        }
        temp=temp->next;
      }
      return ;
    }
    
}
double loadfactor()
{
    return count/m;
}
void display()
{
    for(int i=0;i<m;i++)
    {
        cout<<i<<" : ";
        Node *temp=hashtable[i];

        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }

        cout<<endl;
    }
}

