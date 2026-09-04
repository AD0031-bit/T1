#include<iostream>
using namespace std;
#define m 10
int hashtable[m];
int reverse(int num)
{
    int temp=num;
    int d=0;
    while(temp>0)
    {
        d++;
        temp/=10;
    }
    int r=0;
    for(int i=0;i<d;i++)
    {
        int rem=num%10;
        r=10*r+rem;
        num=num/10;
    }
    return r;
}
void hashing(int key)
{
    int val=key;
    int s=0;
    while(key>0)
    {
       int rev=key%100;
       rev=reverse(rev);
       s+=rev;
       key=key/100;
    }
    int i=s%m;
    hashtable[i]=val;   
   
}
void display()
{
    for(int i=0;i<m;i++)
    {
        cout<<hashtable[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int key;
        cin>>key;
        hashing(key);

    }
    display();
}

