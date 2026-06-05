#include<stdio.h>
int main()
{
    int x=10;
    int *ptr=&x;
    int **dptr=&ptr;

    printf("%d\n",x);
    printf("%d\n",*ptr);
    printf("%d\n",**dptr);

    return 0;
}