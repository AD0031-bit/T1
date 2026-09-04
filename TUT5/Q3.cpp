#include<iostream>
using namespace std;
void partiton(int arr[],int l,int r,int i,int k)
{
    int p=arr[l];
    int q=arr[r-1];
    if(p>q)
    {
        swap(arr[l],arr[r-1]);
        p=arr[l];
         q=arr[r-1];
    }
     i=l+1;
    int j=l+1;
    k=r-1;
   while(j<=k)
   {
    if(arr[i]<p)
    {
        swap(arr[i],arr[j]);
        i++;
        j++;
    }
    else if(arr[j]>q)
    {
        swap(arr[j],arr[k]);
        k--;
    }
    else{
        j++;
    }
   }
   i--;
   k++;
   swap(arr[l], arr[i]);
    swap(arr[r-1], arr[k]);
}
void quicksort(int arr[],int l,int r)
{
    if(r-l<=1)
    return;
    int i,k;
    partiton(arr,l,r,i,k);
    quicksort(arr,l,i-1);
  quicksort(arr,i+1,k-1);
   quicksort(arr,k+1,r);
}

