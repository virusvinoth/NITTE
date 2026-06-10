#include <stdio.h>
int main() 
{
int arr[] = {0, 1, 2,3,4,6};
int n = 4;
int expected = n * (n + 1) / 2;
int actual = 0;
for (int i = 0; i < n; i++)
actual += arr[i];
int result=expected - actual;
printf("Missing: %d",result);
return 0;
}