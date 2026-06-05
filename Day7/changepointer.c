#include <stdio.h>

void reset(int **ptr)
{
    *ptr=NULL;
}
int main()
{
    int x=10;
    int *p=&x;
    reset(&p);
    printf("%d\n",x);
    printf("%d\n",p);

    if (p==NULL)
    printf("Pointer Reset\n");
    printf("%p ",&p);
    return 0;
}