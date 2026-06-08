#include <stdio.h>

int main(int argc,char *argv[])
{
   printf("Arguments = %d\n",argc-1);

   for(int i=0;i<argc;i++)
   {
       printf("%s\n",argv[i]);
   }

   return 0;
}
