// Q make a Prog to read 5 ing from file
#include<stdio.h>
int main(){
    FILE  *fptr;
    fptr=fopen("Q1.txt","r");
    // M1
    /*
    char     ch=fgetc(fptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    */
    // M2
    int i;
    fscanf(fptr,"%d",&i);
    printf("%d",i);
    fscanf(fptr,"%d",&i);
    printf("%d",i);
    fscanf(fptr,"%d",&i);
    printf("%d",i);
    fscanf(fptr,"%d",&i);
    printf("%d",i);
    fscanf(fptr,"%d",&i);
    printf("%d",i);
    fclose(fptr);
    }