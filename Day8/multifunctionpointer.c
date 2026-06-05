#include <stdio.h>

int add(int a,int b)
{
   return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int multiply(int a,int b)
{
    return a*b;
}


int main()
{
   int (*ptr)(int,int);

   ptr = add;
   printf("%d\n",ptr(10,20));

   ptr=sub;
   printf("%d\n",ptr(20,10));
   
   ptr=multiply;
   printf("%d\n",ptr(10,20));

   return 0;
}
