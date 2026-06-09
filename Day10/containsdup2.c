int cmp(const void *a, const void *b)
{
int x = *(const int*)a, 
    y = *(const int*)b;

return (x > y) - (x < y); 
    
// NOT x - y: that can overflow for large ints
}
bool containsDuplicate(int *nums, int n){
qsort(nums, n, sizeof(int), cmp);
for(int i = 1; i < n; i++)
if(nums[i] == nums[i-1]) 
return true;  
// duplicates are now neighbours
return false;
}