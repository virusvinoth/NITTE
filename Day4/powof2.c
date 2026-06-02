//Power of Two
//Logic:n & (n−1)=0n\ \&\ (n-1)=0n & (n−1)=0
#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   if(n>0 && (n&(n-1))==0)
       printf("Power of Two");
   else
       printf("Not Power of Two");

   return 0;
}
