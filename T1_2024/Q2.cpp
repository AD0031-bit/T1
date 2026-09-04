/* #include<iostream>
using namespace std;
struct Node*;
Node *insertionsort(Node*head)
{
    int n=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        n++;
        temp=temp->next;
    }
    temp=head;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=temp->val;
        temp=temp->next;
    }
    for(int i=1;i<n;i++)
    {
        int a=arr[i];
        int j=i-1;
        while(j>=0 &&arr[j]>=a )
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=a;
    }
    temp=head;
    for(int i=0;i<n;i++)
    {
        temp->val=arr[i];
        temp=temp->next;

    }
return head;
}
 */