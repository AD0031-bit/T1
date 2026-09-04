#include<iostream>
using namespace std;
int hoare(int arr[],int l,int r)
{
    
    int p=arr[l];
    int i=l-1;
    int j=r;
    while(true){
    do{
        i++;
    }
    while(p>arr[i]);
    do{
        j--;
    }
    while(p<arr[j]);
    if(i>=j)return j;
    swap(arr[i],arr[j]);}
}
void quicksort(int arr[],int l,int r)
{
    if(l<r)
    {
        int p=hoare(arr,l,r);
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