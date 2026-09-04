#include<iostream>
using namespace std;
struct Node{
    int val;
    Node *next;
    Node(int x)
    {
        val=x;
        next=NULL;
    }
};
class Stack{
    Node*head;
    public:
    Stack()
    {
        head=NULL;
    }
    void push(int x)
    {
        Node *newnode=new Node(x);
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        newnode->next=head;
        head=newnode;
    }
    void pop()
    {
        if(head==NULL)
        {
            cout<<"Invalid";
            return;
        }
        Node *curr=head;
        head=head->next;
        delete curr;
    }
    int size()
    {
        int count=0;
        Node*temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        return count;
    }
    int peek()
    {
        if(head==NULL)
        {
            return -1;
        }
        return head->val;
    }

};
class queue{
    Node *front;
    Node*rear;
    public:
    queue()
    {
        front=NULL;
        rear=NULL;
    }
    void enqueue(int x)
    {
        Node *newnode=new Node(x);
        if(front==NULL)
        {
            front=newnode;
            rear=newnode;
            return;
        }
        rear->next=newnode;
        rear=newnode;
    }
    void dequeue()
    {
        if(front==NULL)
        {
            return;
        }

        Node*curr=front;
        front=front->next;
        delete curr;
        if(front==NULL)
        {
            rear=NULL;
        }
    }
    int front_val()
    {
        if(front==NULL)
        {
            return -1;
        }
        return front->val;
    }
    int size()
    {
        int count=0;
        Node*temp=front;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        return count;
    }

};
int main()
{

}