#include<iostream>
using namespace std;
void merge (int arr[],int l,int mid,int r)
{
    int n=mid-l;
    int m=r-mid;
    int left[n];
    int right[m];
    for(int i=0;i<n;i++)
    {
        left[i]=arr[i+l];
    }
    for(int j=0;j<m;j++)
    {
        right[j]=arr[mid+j];
    }
    int k=l;
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            k++;
            i++;
        }
        else{
            arr[k]=right[j];
            k++;
            j++;

        }
    }
    while(i<n)
    {
        arr[k]=left[i];
        k++;
        i++;
    }
    while(j<m)
    {
        arr[k]=right[j];
        k++;
        j++;
    }
}
void mergesort(int arr[],int l,int r)
{
   if(r-l<=1)return;
   
     int mid=l+(r-l)/2;
     mergesort(arr,l,mid);
     mergesort(arr,mid,r);
     merge(arr,l,mid,r);
   
    
}
int main()
{
    int arr[]={85,24,63,45,17,31,96,50};
    mergesort(arr,0,8);
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
}
