//Q3..wtite a prog to write all odd numbers from 1 to n in a file
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Q3.txt","w");
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    fprintf(fptr,"The odd numbers in range 1 to %d are \n",n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            fprintf(fptr,"%d\t",i);
        }
    }
    fclose(fptr);
}