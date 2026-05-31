#include<stdio.h>
int main()
{
int nums[]={2,7,11,15};
int target=55; //scanf("%d",&target");

int n= sizeof(nums)/sizeof(nums[0]);
printf("%d \n",n);
//printf("%d \n",sizeof(nums));
//printf("%d \n",sizeof(nums[0]));
printf("Array");
for(int k=0;k<n;k++)
{
    printf("%d", nums[k]);
}
printf("\n");
printf("Target:%d\n",target);
printf("---------------------------------\n");
//Brute force method
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(nums[i]+nums[j]==target){
            printf("Found: nums[%d]+nums(%d]=%d+%d=%d\n",
                i,j,nums[i],nums[j],target);
            printf("Output indices:[%d,%d]\n",i,j);
            return 0;
        }
        }
    }  
    printf("No solution found.\n");
    return 0;
}

