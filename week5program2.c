#include<stdio.h>
int main()
{
    int i,j = 0;
    int AverageH;
    int Xi = 0;
    int k;
    int hieght[10];
    while(i<10)
    {
        printf("enter you hieght:");
        scanf("%d",&hieght[i]);
        i++;
    }
    while(j<10)
    {
        printf("%d\n",hieght[j]);
        Xi += hieght[j];
        j++;
    }
    AverageH = Xi/10;
    printf("Height average is:%d",AverageH);
    return 0;
}