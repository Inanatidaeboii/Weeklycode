#include<stdio.h>
int main ()
{
    int Sums,value,k;
    int nums[2];
    printf("enter your nums: ");
    for(int i = 0 ; i < 2 ; i++){
        scanf("%d",&nums[k]);
        value = nums[k];
        k++;
        Sums = Sums + value;
        }
            printf("sums is %d",Sums);
return 0;
}