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
};
int main()
{
    queue q;
    q.push(17);
    q.push(23);
    q.push(97);
    q.push(44);
    cout<<q.pop()<<" ";
     cout<<q.pop()<<" ";
      cout<<q.pop()<<" ";
       cout<<q.pop()<<" ";

}