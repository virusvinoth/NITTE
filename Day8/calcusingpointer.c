#include <stdio.h>

int add(int a,int b)
{
   return a+b;
}

int subtract(int a,int b)
{
   return a-b;
}

int multiply(int a,int b)
{
   return a*b;
}

int divide(int a,int b)
{
   return a/b;
}

int main()
{
   int choice,a,b;

   int (*operation)(int,int);

   printf("1.Add\n");
   printf("2.Subtract\n");
   printf("3.Multiply\n");
   printf("4.Divide\n");


   printf("Enter your choice:\n");
   scanf("%d",&choice);

   printf("Enter Numbers: \n");
   scanf("%d%d",&a,&b);


   switch(choice)
   {
       case 1:
           operation=add;
           break;

       case 2:
           operation=subtract;
           break;

       case 3:
           operation=multiply;
           break;

       case 4:
           operation=divide;
           break;

       default:
           printf("Invalid");
           return 0;
   }

   printf("Result = %d",
          operation(a,b));

   return 0;
}
