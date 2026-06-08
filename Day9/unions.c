#include<stdio.h>
 union Data{
    int i;
    float f;
 };
  int main()
  {
    union Data d;
    d.i=10;
    printf("%d\n",d.i);
    d.f=3.14;
    printf("%.2f\n",d.f);
    return 0;

  }