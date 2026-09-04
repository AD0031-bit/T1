#include<iostream>
using namespace std;
# define m 10
struct Node{
    int val;
    Node*next;
    Node(int x)
    {
        val=x;
        next=NULL;
    }
};
Node *hashtable[m];
void hashing(int key)
{
    Node *newnode=new Node(key);
    int i=key%m;
    if(hashtable[i]==NULL)
    {
        hashtable[i]=newnode;
    }
    else{
        newnode->next=hashtable[i];
        hashtable[i]=newnode;
    }



}
