#include<stdio.h>
int main(){
    int n,x;
    x=1;
    printf("Enter the number of lines : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("%d\t",x++);
        }
        printf("\n");
    }
}