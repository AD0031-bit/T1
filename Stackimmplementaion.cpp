#include<iostream>
using namespace std;
class stack{
    int arr[50];
    int top;
    public:
    stack()
    {
        top=-1;

    }
    void push(int x)
    {
        if(top==49)
        {
            cout<<"overflow";
            return;
        }
        top++;
        arr[top]=x;
    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"Underflow";
            return -1;
        }
        int a=arr[top];
        top--;
        return a;

    }
    int peek()
    {
        if(top==-1)
        {
            return -1;
        }
        return arr[top];
    }
    int size()
    {
        return top+1;
    }
    bool empty()
    {
        if(top==-1)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    stack s;
    s.push(10);
    s.push(20);
    cout<<s.pop()<<" ";
    s.push(30);
    s.push(20);
    cout<<s.pop()<<" ";
    cout<<s.pop()<<" ";
     cout<<s.pop()<<" ";
     s.push(20);
       cout<<s.pop()<<" "; 


}