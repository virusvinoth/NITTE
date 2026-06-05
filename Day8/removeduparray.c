//Sorted array duplicate removal
#include <stdio.h>
int main()
{
    int arr[]={1,1,2,2,3,4,4};
    int n=7;
    int j=0;
    for(int i =1;i<n;i++)
    {
        if(arr[i]!=arr[j]) //1!=0 j=1 *1* 
                          //1!=1 exit 
                          //2!=1 j=3 *2*
                          //2!=2 exit//
        {
            j++;
            arr[j]=arr[i];
        }
    }
    for(int i=0;i<=j;i++)
    {
        printf("%d ",arr[i]);
    }
return 0;
}