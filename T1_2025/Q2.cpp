#include<iostream>
using namespace std;
int find(int arr[],int n,int m)
{
    int count[m]={0};
    for(int i=0;i<n;i++)
    {
        if(count[arr[i]]==0)
        {
            count[arr[i]]++;
        }
        else{
            return arr[i];
        }
    }
    return -1;
}