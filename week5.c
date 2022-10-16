#include<stdio.h>
int main()
{
    int AverageH;
    int Xi;
    int k;
    int height[10];
    for(int i=0 ; i<10 ;i++)
    {
        printf("enter you height:");
        scanf("%d",&height[i]);
    }
    for(int j = 0; j<10; j++)
    {
        printf("%d\n",height[j]);
        Xi += height[j];
    }
    AverageH = Xi/10;
    printf("Height average is:%d",AverageH);
    return 0;
}