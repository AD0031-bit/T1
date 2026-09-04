#include<iostream>
using namespace std;
int mediansearch(int arr[],int n,int k)
{
    int s1[100];
    int s2[100];
    int s3[100];
    int a=0,b=0,c=0;
    int p=arr[rand()%n];
    for(int i=0;i<n;i++)
    {
        if(p>arr[i])
        {
            s1[a]=arr[i];
            a++;
        }
        else if(arr[i]>p)
        {
            s3[c]=arr[i];
            c++;
        }
        else{
            s2[b]=arr[i];
            b++;
        }
    }
    if(a>=k)
    {
        return mediansearch(s1,a,k);
    }
    else if(a+b>=k)
    {
        return p;
    }
    else{
       return mediansearch(s3,c,k-(a+b));
    }
}