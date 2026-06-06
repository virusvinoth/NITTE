#include<stdio.h>
int main()
{
    char name[50];
    printf("Enter the Name:");
    fgets(name,50,stdin);
    printf("Name:%s",name);
    
}