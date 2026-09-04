#include<iostream>
using namespace std;
#define m 10
int hashtable[10];
void hasing(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int idx=arr[i]%m;
        if(arr[idx]==0)
        {
            hashtable[idx]=arr[i];
        }
        else{
            int k=0;
            if(hashtable[idx]==arr[i])
            {
                cout<<arr[i]<<" ";
            }
            else{
                while(hashtable[(idx+k)%m]!=0)
                {
                    if(hashtable[(idx+k)%m]==arr[i])
                    {
                        cout<<arr[i]<<" ";
                    }
                    k++;
                }

            }
        }

    }
}
