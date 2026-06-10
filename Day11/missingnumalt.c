//bruteforce method
#include <stdio.h>
#include <stdbool.h>

int missingNumber(int *nums, int n)
{
for(int candidate = 0; candidate <= n; candidate++)
{
bool found = false;
for(int i = 0; i < n; i++)
if(!found) 
return candidate;
}
return -1;
}
int main(){
if(nums[i] == candidate)
{ found = true; 
break; }
int a[]={3,0,1}; int n=3;
printf("Missing: %d\n", missingNumber(a,n));   // 2
}