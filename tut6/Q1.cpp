#include<iostream>
using namespace std;
struct Node1{
    string day;
    Node1 *next;
    Node2* down;
  Node1(string d)
  {
    day=d;
    next=NULL;
    down=NULL;
  }
};
struct Node2{
    string sub;
    string teacher;
    Node2*down;
    Node2(string s, string t)
    {
        sub=s;
        teacher=t;
        down=NULL;
    }
};
Node1 *days[5];
void add_details()
{
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    Node2 *newnode=new Node2(s,t);
    if(days[n]==NULL)
    {
      days[n]=new Node1("Day");
      days[n]->down=newnode;

    }
    else{
        Node2*temp=days[n]->down;
        while(temp->down!=NULL)
        {
            temp=temp->down;
        }
        temp->down=newnode;

    }
}