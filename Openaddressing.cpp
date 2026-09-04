#include<iostream>
using namespace std;
# define m 10
int hashtable[m];
void hashing(int key)
{
    int i=key%m;
    if(hashtable[i]==0||hashtable[i]==-1)
    {
        hashtable[i]=key;
    }
    else{
        int k=0;
        while(hashtable[(i+(k*k))%m]!=0 && hashtable[(i+(k*k))%m]!=-1&&k<m)
        {
            k++;
        }
        hashtable[(i+(k*k))%m]=key;
    }
}
bool search(int key)
{
    int i=key%m;
    if(hashtable[i]==0)
    {
        return false;
    }
    else{
        int k=0;
        while(k<m&& hashtable[(i+(k*k))%m]!=0)
        {
            if(hashtable[(i+(k*k))%m]==key)
            {
                return true;
            }
            k++;

        }
        return false;
    }
}
void del(int key)
{
    int i=key%m;
    if(hashtable[i]==0)
    {
       return;
    }
    else{
        int k=0;
        while(k<m&& hashtable[(i+(k*k))%m]!=0)
        {
            if(hashtable[(i+(k*k))%m]==key)
            {
               hashtable[(i+(k*k))%m]=-1;
            }
            k++;

        }
       
    }
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
