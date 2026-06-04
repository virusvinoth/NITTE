#include <stdio.h>

int main()
{
   int arr[3]={10,20,30};

   printf("%d\n",*arr);

   printf("%d\n",*(arr+1));

   printf("%d\n",*(arr+2));

   return 0;
}