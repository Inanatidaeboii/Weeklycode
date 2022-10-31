#include<stdio.h>
int main (){
    int x,y;
    printf("Enter X:");
    scanf("%d",&x);
    printf("Enter Y:");
    scanf("%d",&y);

    x = x-y;
    y = x+y;
    x = y-x;
    //x = x/y;
    // if(x<0){
    //     x = x+-3*x;
    // }

    printf("X swap to:%d\nY swap to:%d",x,y);

}