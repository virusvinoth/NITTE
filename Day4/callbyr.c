//Passing address instead of value.
#include <stdio.h>
void change(int *x)
{
   *x = 100;
}
int main()
{
   int num = 10;
   change(&num);
   printf("%d",num);
   return 0;
}
