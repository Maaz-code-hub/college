#include<stdio.h>
int main(){
    int rows,i,x,j;
    x=1;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=0;j<i;j++){
            printf("%d\t",x++);
        }
        printf("\n");
    }
    return 0;
}