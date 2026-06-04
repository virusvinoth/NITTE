#include<stdio.h>
int main()
{
char s1[]="ABC";//{ }
char s2[]="XYZ";

int i=0;

 while (s1[i] && s2[i])
 {
    printf("%c%c",s1[i],s2[i]);
    i++;
 }
 return 0;

}