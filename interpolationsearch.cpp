#include<iostream>
using namespace std;
int interpolation(int arr[],int l,int r,int x)
{
    while(l<=r)
    {
        int p=l+(((x-arr[l])*(r-l))/(arr[r]-arr[l]));
        if(arr[p]>x)
        {
            r=p-1;

        }
        else if(arr[p]<x)
        {
            l=p+1;
        }
        else{
            return p;
        }
    }
}
int main()
{
    int arr[]={10,12,13,16,18,19,20,21,22,23,24,33,35,42,47};
    cout<<interpolation(arr,0,14,18);

}