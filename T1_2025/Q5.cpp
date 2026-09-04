#include<iostream>
using namespace std;
int bs(int arr[],int l,int r,int x)
{
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]>x)
        {
            r=mid-1;
        }
        else if(arr[mid]==x)
            {return  mid;
        }
        else {
            l=mid+1;
        }
    }
    return -1;
}