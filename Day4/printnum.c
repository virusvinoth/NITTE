#include <stdio.h> #Recursion(fibonacci)
void printNum(int n)
{
   if(n==0)
       return;
   printf("%d ",n);
   printNum(n-1);
}

int main()
{
   printNum(5);
}
