#include<iostream>
using namespace std;
int funct(int arr[][2],int n)
{
    int parent[n+1];
    for(int i=0;i<n;i++)
    {
        parent[arr[i][0]]=arr[i][1];
    }
    int max=0;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int count=0;
        int temp=i;
        while(parent[temp]!=0)
        {
            count++;
            temp=parent[temp];
        }
        if(count>max)
        {
            max=count;
            ans=i;
        }
    }
    return ans;
}