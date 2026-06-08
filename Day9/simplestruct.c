#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[50];
    float cgpa;
};
int main()
{
    struct student s1;
    s1.id=101;
    strcpy(s1.name,"Vikas");
    s1.cgpa=8.5;

    printf("%d\n",s1.id);
    printf("%s\n",s1.name);
    printf("%.2f\n",s1.cgpa);
    return 0;

}
