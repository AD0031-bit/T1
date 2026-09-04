#include<iostream>
using namespace std;
int mediansearch(int arr[],int n,int k)
{
    int S1[100];
    int S2[100];
    int S3[100];
    int a=0,b=0,c=0;
    int p=rand()%n;
    for(int i=0;i<n;i++)
    {
        if(arr[p]>arr[i])
        {
            S1[a]=arr[i];
            a++;
        }
        else if(arr[p]<arr[i])
        {
            S3[c]=arr[i];
            c++;
        }
        else{
            S2[b]=arr[i];
            b++;
        }
    }
    if(a>=k)
    {
       return mediansearch(S1,a,k);
    }
    else if(a+b>=k)
    {
        return arr[p];
    }
    else{
        return mediansearch(S3,c,k-(a+b));  }



}
int main()
{
    int arr[]={7,10,4,3,20,15,8,12,6};
    cout<<mediansearch(arr,9,4);

}