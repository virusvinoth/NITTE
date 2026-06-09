#include <stdio.h>
int main() {

    FILE *fp=fopen("data.txt","r");
    char text[100];
    fscanf(fp,"%s",text);
    printf("%s",text);
    fclose(fp);
    return 0;
}