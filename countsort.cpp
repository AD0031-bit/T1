#include<iostream>
using namespace std;
int maxele(int arr[],int n)
{
    int maxe=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxe)
        {
            maxe=arr[i];
        }

    }
    return maxe;
}
void countsort(int arr[],int n)
{
    int maxe=maxele(arr,n);
    int count[maxe+1];
    for(int i=0;i<maxe+1;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        
        count[arr[i]]++;
    }
    for(int i=1;i<=maxe;i++)
    {
        count[i]=count[i-1]+count[i];
    }
    int output[n];
    for(int i=n-1;i>=0;i--)
    {
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=output[i];
    }


}

int main()
{
    int arr[]={170,45,75,90,802,24,2,66};

    countsort(arr,8);

    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
}