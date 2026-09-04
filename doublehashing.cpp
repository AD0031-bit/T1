#include<iostream>
using namespace std;
# define m 11
int hashtable[m];
void hashing(int key)
{
    int h1=key%m;
    int h2=7-(key%7);
    if(hashtable[h1]==0||hashtable[h1]==-1)
    {
        hashtable[h1]=key;
    }
    else{
        int k=0;
     
        while(hashtable[(h1+k*h2)%m]!=0 && hashtable[(h1+k*h2)%m]!=-1&&k<m)
        {
            k++;
        }
        hashtable[(h1+k*h2)%m]=key;
    }
}
bool search(int key)
{
     int h1=key%m;
    int h2=7-(key%7);
   
    if(hashtable[h1]==0)
    {
        return false;
    }
    else{
        int k=0;
        while(k<m&& hashtable[(h1+k*h2)%m]!=0)
        {
            if(hashtable[(h1+k*h2)%m]==key)
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
    int h1=key%m;
    int h2=7-(key%7);
    if(hashtable[h1]==0)
    {
       return;
    }
    else{
        int k=0;
        while(k<m&& hashtable[(h1+k*h2)%m]!=0)
        {
            if(hashtable[(h1+k*h2)%m]==key)
            {
               hashtable[(h1+k*h2)%m]=-1;
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
