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
void countsort(int arr[],int n,int ele)
{
    int count[10];
    for(int i=0;i<10;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        int d=arr[i]/ele%10;
        count[d]++;
    }
    for(int i=1;i<10;i++)
    {
        count[i]=count[i-1]+count[i];
    }
    int output[n];
    for(int i=n-1;i>=0;i--)
    {
        output[count[arr[i]/ele%10]-1]=arr[i];
        count[arr[i]/ele%10]--;
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=output[i];
    }


}
void radixsort(int arr[],int n )
{
    int maxe=maxele(arr,n);
    for(int i=1;i<=maxe;i=i*10)
    {
        countsort(arr,n,i);
    }
}
int main()
{
    int arr[]={170,45,75,90,802,24,2,66};

    radixsort(arr,8);

    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
}