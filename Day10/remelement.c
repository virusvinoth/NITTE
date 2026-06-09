#include <stdio.h>
int main()
{
    int arr[]={3,2,2,3};
    int n=4;
    int val=3;
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=val)
        {
            arr[k++]=arr[i];
        }
    }
    for(int i=0;i<k;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}