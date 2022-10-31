#include<stdio.h>
int main (){
    int x,y;
    printf("Enter X:");
    scanf("%d",&x);
    printf("Enter Y:");
    scanf("%d",&y);

    x = x*y;
    y = x/y;
    x = x/y;

    printf("X swap to:%d\nY swap to:%d",x,y);

}