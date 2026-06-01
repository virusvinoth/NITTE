#include <stdio.h>
#include <math.h>

int main()
{
   int choice;
   double a,b;

   printf("Scientific Calculator\n");

   printf("1.Addition\n");
   printf("2.Subtraction\n");
   printf("3.Multiplication\n");
   printf("4.Division\n");
   printf("5.Power\n");
   printf("6.Square Root\n");

   printf("Enter Choice: ");
   scanf("%d",&choice);

   switch(choice)
   {
       case 1:
           scanf("%lf%lf",&a,&b);
           printf("%.2lf",a+b);
           break;

       case 2:
           scanf("%lf%lf",&a,&b);
           printf("%.2lf",a-b);
           break;

       case 3:
           scanf("%lf%lf",&a,&b);
           printf("%.2lf",a*b);
           break;

       case 4:
           scanf("%lf%lf",&a,&b);
           printf("%.2lf",a/b);
           break;

       case 5:
           scanf("%lf%lf",&a,&b);
           printf("%.2lf",pow(a,b));
           break;

       case 6:
           scanf("%lf",&a);
           printf("%.2lf",sqrt(a));
           break;

       default:
           printf("Invalid Choice");
   }

   return 0;
}
