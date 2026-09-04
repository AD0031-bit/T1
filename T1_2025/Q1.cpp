/* #include<iostream>
using namespace std;
struct Node;
Node *intersect(Node*head1,Node*head2)
{
    int n=0;
    int m=0;
    Node*temp1=head1;
     Node*temp2=head2;
    while(temp1!=NULL)
    {
        temp1=temp1->next;
        n++;
    }
     while(temp2!=NULL)
    {
        temp2=temp2->next;
        m++;
    }
    temp1=head1;
    temp2=head2;
    if(n>m)
    {
        for(int i=0;i<n-m;i++)
        {
            temp1=temp1->next;
        }

    }
    else{
        for(int i=0;i<m-n;i++)
        {
            temp2=temp2->next;
        }

    }
    while(temp1!=NULL &&temp2!=NULL)
        {
            if(temp1==temp2)
            {
                return temp1;
            }
            else{
                temp1=temp1->next;
                temp2=temp2->next;
            }

        }
        return NULL;
}
 */