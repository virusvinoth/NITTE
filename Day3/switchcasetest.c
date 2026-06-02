#include <stdio.h>
int main()
{
   int choice;
   printf("1. Java\n");
   printf("2. Python\n");
   printf("3. C\n");
   scanf("%d",&choice);

   switch(choice)
   {
       case 1:
           printf("Java Selected");
           break;
       case 2:
           printf("Python Selected");
           break;
       case 3:
           printf("C Selected");
           break;
       default:
           printf("Invalid Option");
   }

   return 0;
}
