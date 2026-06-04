#include<stdio.h>
int main()
{
    int arr[5]={1,0,3,0,5};
    int pos=0;

    for(int i=0;i<5;i++)
    {
        if(arr[i]!=0)
        {
            arr[pos++]=arr[i];
        }
    }
    while(pos<5)
    {
        arr[pos++]=0;
    }
    for(int i=0;i<5;i++)
    printf("%d",arr[i]);
}
