//In C, arguments are copied into function parameters.

#include <stdio.h>
void change(int x)
{
   x = 100;
   //printf("%d\n",x);
}
int main()
{
   int num = 10;
   change(num);
   printf("%d",num);
   
   return 0;
}
