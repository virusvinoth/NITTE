#include <stdio.h>
struct Student
{
   int id;
   char name[50];
};

int main()
{
   struct Student s[2];

   printf("Enter ID: ");
   scanf("%d",&s[0].id);

   printf("Enter Name: ");
   scanf("%s",s[0].name);

   printf("%d %s",
          s[0].id,
          s[0].name);
}
