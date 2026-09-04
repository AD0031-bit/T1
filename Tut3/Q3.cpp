#include<iostream>
using namespace std;
int funct(int n)
{
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        int x;
        cin>>x;
        sum+=x;
    }
    int tsum=(n*(n+1))/2;
    return tsum-sum;
}