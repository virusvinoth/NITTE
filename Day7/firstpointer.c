//First Pointer Program
#include <stdio.h>

int main()
{
   int salary = 25000; //age=20;

   int *ptr = &salary;

   printf("Value = %d\n",salary);

   printf("Address = %p\n",&salary);

   printf("Pointer = %p\n",ptr);

   printf("Dereference = %d\n",*ptr);

   return 0;
}