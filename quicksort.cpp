#include<iostream>
using namespace std;
int lomuto (int arr[],int l,int r)
{
    int p=arr[r-1];
    int j=l;
    for(int i=l;i<r-1;i++)
    {
        if(arr[i]<=p)
        {
            swap(arr[j],arr[i]);
           j++;
        }
    }
    swap(arr[j],arr[r-1]);
    return j;
}
void quicksort(int arr[],int l,int r)
{
    if(l<r)
    {
        int p=lomuto(arr,l,r);
        quicksort(arr,l,p);
        quicksort(arr,p+1,r);
    }
}
int main()
{
    int arr[]={1,4,8,3,2,5};
    quicksort(arr,0,6);
  for(int i=0;i<6;i++)
  {
    cout<<arr[i]<<" ";
  }

    
}