#include<stdio.h>
int main ()
{
    int x;
    int i=1;
    int j=1;
    printf("enter your rows: ");
    scanf("%d",&x);
    while(i<=x)
    {
        while(j<=2*x-1)
        {
            if(j >= x-(i-1) && j <= x+(i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
        j=1;
    }
    return 0;
}