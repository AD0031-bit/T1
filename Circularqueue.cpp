#include<iostream>
using namespace std;
class circular{
    int arr[5];
    int front;
    int rear;
    int n=5;
    public:
    circular()
    {
        front=-1;
        rear=-1;
    }
    void push(int x)
    {
        if((rear+1)%5==front)
        {
            cout<<"Overflow";
            return ;
        }
        if(front==-1)
        {
            front++;
            rear++;
        }
        else{
            rear=(rear+1)%5;
        }
        arr[rear]=x;
    }
    int deq(){
        if(front==-1)
        {
            cout<<"underflow";
            return -1;
        }
        int x=arr[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        front=(front+1)%5;
        return x;

    }
};
int main()
{
    
    
}