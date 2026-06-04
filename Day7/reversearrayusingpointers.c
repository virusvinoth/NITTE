#include <stdio.h>
int main(){

    int arr[]={10,20,30,40,50};

    int *start=arr; //arr[0]// 0
    int *end=arr+4; //arr+4 // 0+4
    while(start<end)
    {
        int temp=*start;
        *start=*end;
        *end=temp;
    
        start++;
        end--;
    }
    for(int i=0;i<5;i++)
    printf("%d ",arr[i]);
}