#include<stdio.h>
int main()
{
    char s1[]="flower";
    char s2[]="flows";

    int i=0;
    while (s1[i]==s2[i])
    {
        printf("%c ",s1[i]);
        i++;
    }
    return 0;
}