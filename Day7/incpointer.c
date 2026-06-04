#include<stdio.h>
int main()
{
    int arr[3]={10,20,30}; //0,1,2
    int *ptr=arr; //arr means arr[0]

    //ptr=ptr+0;
    printf("%d\n",*ptr);
    printf("Address = %d\n",ptr);
    //ptr--;

    ptr=ptr+1;
    printf("%d\n",*ptr);
    printf("Address = %d\n",ptr);
    ptr--;

    //ptr=ptr+1;
    printf("%d\n",*ptr);
    printf("Address = %d\n",ptr);
    //ptr++;  
    
    return 0;
}