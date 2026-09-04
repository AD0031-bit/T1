#include<iostream>
using namespace std;
int funct(int arr1[],int arr2[],int n,int m,int k)
{
    int i=0;
    int j=0;
    int count=0;
    int val=0;
    while(i<n &&j<m)
    {
        if(arr1[i]<=arr2[j])
        {
            val=arr1[i];
            i++;
            count++;

        }
        else{
            val=arr2[j];
            j++;
            count++;
        }
        if(count==k)
        {
            return val;

        }
    }
    while(i<n)
    {
         val=arr1[i];
            i++;
            count++;
            if(count==k)
        {
            return val;


    }


}
 while(j<m)
    {
         val=arr2[j];
            j++;
            count++;
            if(count==k)
        {
            return val;


    }
    }}
