#include<iostream>
using namespace std;
#define m 10
int hashtable[m];
void hashing(int key)
{
   
   int val=key*key;
   int digit=0;
   int temp=val;
   while(temp>0)
   {
    temp=temp/10;
    digit++;
   }
   for(int i=0;i<digit/2;i++)
   {
    val=val/10;
   }
   int index=val%10;
   hashtable[index]=key;
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

