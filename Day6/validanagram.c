#include <stdio.h>
#include <string.h>

int main()
{
   char s1[]="listen";
   char s2[]="silent";

   int count1[26]={0};
   int count2[26]={0};

   for(int i=0;s1[i];i++)
       count1[s1[i]-'a']++;

   for(int i=0;s2[i];i++)
       count2[s2[i]-'a']++;

   int flag=1;

   for(int i=0;i<26;i++)
   {
       if(count1[i]!=count2[i])
       {
           flag=0;
           break;
       }
   }

   if(flag)
       printf("Anagram");
   else
       printf("Not Anagram");
}
