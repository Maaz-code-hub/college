#include<stdio.h>
int main(){
    int x,n;
    x=1;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("%d\t",x++);
        }
        printf("\n");
    }
    return 0;
}