#include<iostream>
using namespace std;
struct Node{
    string val;

    Node*next;
    Node(string v)
    {
        val=v;
       
        next=NULL;
    }
};

void add(Node*aol[6])
{
    for(int i=0;i<6;i++)
    {
        cout<<"Enter the number of class for the day:";
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
              string v;
            cin>>v;
           if(aol[i]==NULL)
           {
            aol[i]=new Node(v);
           }
           else
            {
                Node*temp=aol[i];

                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }

                temp->next=new Node(v);
            }
        }
    }
}
void display(Node *aol[6])
{
    for(int i=0;i<6;i++)
    {
        cout<<"Day:"<<i+1<<endl;
       
        Node*temp=aol[i];
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;

    }
    }


int main()
{
    Node*aol[6]={NULL};
    add(aol);
}


