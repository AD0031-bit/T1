#include<iostream>
using namespace std;
int firstoccur(int arr[],int n,int x)
{
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]>x)
        {
            r=mid-1;
        }
        else if(arr[mid]<x)
        {
            l=mid+1;
        }
        else{
            if(mid==0||arr[mid-1]!=arr[mid])
            {
                return mid;
            }
            else{
                r=mid-1;
            }

        }
    }
}
int lastoccur(int arr[],int n,int x)
{
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]>x)
        {
            r=mid-1;
        }
        else if(arr[mid]<x)
        {
            l=mid+1;
        }
        else{
            if(mid==n-1||arr[mid]!=arr[mid+1])
            {
                return mid;
            }
            else{
                l=mid+1;
            }

        }
    }
}