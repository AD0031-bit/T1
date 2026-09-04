#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
    int j,temp;
    for(int i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(arr[j]>=temp &&j>=0)
        {
            arr[j+1]=arr[j];
            j=j-1;

        }
        arr[j+1]=temp;

    }
    
}
int main()
{
    int arr[]={77,42,35,12,101,5};
    insertionsort(arr,6);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
}