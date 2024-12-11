#include<stdio.h>
int main(){
    int m,n,p,q;
    char x;
    int A[100][100];
    int B[100][100];
    int AB[100][100];
    printf("Enter the order of matrix A :");
    scanf("%d%c%d",&m,&x,&n);
    printf("Enter the order of matrix B :");
    scanf("%d%c%d",&p,&x,&q);
    if(n!=p){
        printf("Matrix cannot be multiplied!!");
        return 0;
    }
    else{
        printf("Enter the elements of matrix A :\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&A[i][j]);
            }
        }

        printf("Enter the elements of matrix B :\n");
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                scanf("%d",&B[i][j]);
            }
        }
    }

    // Matrix mutiplication process
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){            
            for(int k=0;k<n;k++){         // we can exchange p with n(n==p)!!
                AB[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    printf("The resultant matrix is :\n");
    // printing mutilied matrix
    for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                printf("%d\t",AB[i][j]);
            }
        printf("\n");
        }
        return 0;
}