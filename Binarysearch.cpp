#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int x)
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
            return mid;
        }

    }
    return -1;
}
int main()
{
    int arr[]={3,5,8,13,15,18,25,29,35,45,47,70};
    cout<<binarysearch(arr,12,13);
}