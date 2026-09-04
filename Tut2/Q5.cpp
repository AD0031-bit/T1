#include<iostream>
using namespace std;
class queue{
    int arr[50];
    int front,rear;
    public:
    queue()
    {
        front=-1;
        rear=-1;
    }
    void push(int x)
    {
        if(front==-1&&rear==-1)
        {
            front++;
            rear++;
            arr[rear]=x;
            return;
        }
        if(rear==49)
        {
            cout<<"Overflow";
            return;
        }
        rear++;
        arr[rear]=x;
    }
    int pop()
    {
        if(front==-1||front>rear)
        {
            cout<<"Underflow";
            return -1;
        }
        int a=arr[front];
        front++;
        return a;    
    }
    int size()
    {
         if(front==-1||front>rear)
        {
            cout<<"Underflow";
            return -1;
        }
        return rear-front+1;
    }
    bool empty()
    {
        if(front==-1)
        {
            return true;
        }
         if(front>rear)
        {
            return true;
        }
        return false;
    }
    void display()
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    queue q,q1;
    q.push(5);
    q.push(11);
    q.push(34);
    q.push(67);
    q.push(43);
    q.push(55);
    int n=3;
    
    int s=q.size();
    for(int i=0;i<n-1;i++)
    {
        q1.push(q.pop());
    }
    q.push(q.pop());
    while(!q1.empty())
    {
        q.push(q1.pop());
    }
    for(int i=0;i<s-n;i++)
    {
        q.push(q.pop());
    }
    q.display();

}