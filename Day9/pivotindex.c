#include <stdio.h>
int main()
{
    int arr[]={1,7,3,6,5,6};
    int n=6;
    for(int i=0;i<n;i++)
    {
        int left=0,right=0;

        for(int j=0;j<i;j++)
        left+=arr[j];
        for(int j=i+1;j<n;j++)
        right+=arr[j];

        if(left==right)
        {
            printf("%d",i);
            break;
        }
    }
}