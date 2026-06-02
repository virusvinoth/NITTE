#include<stdio.h>

int fibonacci(int n)
{
    if(n<=1)
    return n;
    return fibonacci(n-1) + fibonacci(n-2); //0 1 1 2 3 5 8 13 21 34 55
}

int main()
{
    printf("%d",fibonacci(10));
    return 0;
}