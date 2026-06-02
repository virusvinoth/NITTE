#include<stdio.h>
 int digitsum(int n)
 {

    if(n==0)
    return 0;
    return (n%10)+digitsum(n/10);
 }
 int main()
 {
    print("%d",digitsum(1234));
 }