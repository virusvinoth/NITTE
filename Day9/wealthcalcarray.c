#include <stdio.h>
int main()
{
    int accounts[3][3]=
    {
        {1,2,3},
        {3,2,1},
        {4,5,6}

    };
int max=0;
for(int i=0;i<3;i++)
{
    int sum=0;
    for(int j=0;j<3;j++)
    {
        sum+=accounts[i][j];
    }
    if(sum>max)
    max=sum;
}
printf("%d",max);

}
