#include<stdio.h>
int main (){
    int number;
    float temp,sqrt;
    printf("Provide the number:");
    scanf("%d",&number);

    sqrt = number / 2;
    temp = 0;

    while(sqrt != temp){
        temp = sqrt;
        sqrt = (number / temp + temp) / 2;
    }
    printf("The square root is :%f",sqrt);
    return 0;
}