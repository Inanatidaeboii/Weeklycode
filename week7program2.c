#include<stdio.h>
int main(){
    float i,n;
    printf("Enter your number:");
    scanf("%f",&n);
    for(i=0.01;i*i<n;i=i+0.01){}
    printf("The square root is:%.4f",i);
    return 0;
}