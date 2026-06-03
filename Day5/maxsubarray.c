// Brute Force Approach
//Maximum subarray
#include<stdio.h>
int main()
{
    int arr[]={1,-2,3,4,-1};
    int max=arr[0];
    for (int i=0;i<5;i++)
    {
        int sum=0;
        for(int j=i;j<5;j++)
        {
            sum+=arr[j];
            //sum=sum+arr[j];
            if(sum>max)
            max=sum;
    }
    }
    printf("%d",max);
}