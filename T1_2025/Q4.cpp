#include<iostream>
using namespace std;
void countsort(int arr[],int n,int ele)
{
    int count[10]={0};
    for(int i=0;i<n;i++)
    {

        count[arr[i]/ele%10]++;
    }
    for(int i=1;i<10;i++)
    {
        count[i]=count[i-1]+count[i];

    }
    int op[n];
    for(int i=n-1;i>=0;i--)
    {
        op[count[arr[i]/ele%10]-1]=arr[i];
        count[arr[i]/ele%10]--;
        
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=op[i];
    }
    

}
void radix(int arr[],int n,int maxele)
{
    for(int i=1;i<=maxele;i=i*10)
    {
        countsort(arr,n,i);

    }
}