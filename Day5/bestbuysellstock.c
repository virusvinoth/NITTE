#include<stdio.h>

int main()
{
    int prices[]={7,1,5,3,6,4};
    int min=prices[0];
    int profit=0;

    for(int i=1;i<6;i++)
    {
        if(prices[i]<min)
        min=prices[i];

        if(prices[i]-min>profit)
        profit=prices[i]-min;
    }
    printf("Profit=%d",profit);
}