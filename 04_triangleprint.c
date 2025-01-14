#include<stdio.h>
int main(){
    int rows,x;
    x=1;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    for(int i = 1;i<=rows;i++){
        for(int j=0;j<i;j++){
            printf("%d\t",x++);
        }
        printf("\n");
    }
}