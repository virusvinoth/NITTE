#include <stdio.h>
#include <errno.h>
int main() {
FILE *fp = fopen("abc.txt", "r");
if (fp == NULL) {
printf("Error Number = %d\n", errno);
perror("Error");
}
return 0;
}