#include<stdio.h>
int main(){
    int i,j,row,col;
    int Mat1[5][5];
    int Mat2[5][5];
    int sums[5][5];
    printf("Row is:");
    scanf("%d",&row);
    printf("Col is:");
    scanf("%d",&col);
    //1st Matrix
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Please fill your Matrix:");
            scanf("%d",&Mat1[i][j]);
        }
    }
    //2nd Matrix
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Please fill your Matrix:");
            scanf("%d",&Mat2[i][j]);
        }
    }
    //sums of 2Matrix
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            sums[i][j]=Mat1[i][j]+Mat2[i][j];
        }
    }
    //printing
    printf("Sum is:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t",sums[i][j]);
        }
        printf("\n");
    }
}