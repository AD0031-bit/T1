#include<iostream>
using namespace std;
#define m 8
int hashtable[m];
void hashing(int key)
{
   
    int index=key%m;
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

