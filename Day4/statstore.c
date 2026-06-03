#include<stdio.h>

void test()
{
    static int count=0; //static-Retains value between function calls.
    count++;
    printf("%d\n",count);
}

int main()
{

    test();
    test();
    test();
    test();

}