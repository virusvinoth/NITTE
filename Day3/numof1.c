#include <stdio.h>
int main()
{
   int n,count=0;

   scanf("%d",&n);

   while(n)
   {
       count=count+(n&1); //n=13 (13&1)
       n = n>>1; //13>>1
       //count += n & 1;
       //n >>= 1;
   }
   printf("%d",count);
   return 0;
}