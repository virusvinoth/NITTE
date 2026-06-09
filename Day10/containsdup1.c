#include <stdio.h>
int main()
{
   int arr[]={1,2,3,1};
   int n=4;
   int duplicate=0;
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(arr[i]==arr[j])
           {
               duplicate=1;
           }
       }
   }
   if(duplicate)
       printf("True");
   else
       printf("False");
}
