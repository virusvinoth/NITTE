#include <stdio.h>
#include <errno.h>
int main() {
FILE *fp;
fp = fopen("student.txt", "r");
if (fp == NULL) {
perror("Error Opening File");
}
return 0;
}