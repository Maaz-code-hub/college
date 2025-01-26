// Q1..copy content of 1st file to 2nd file
/*
#include<stdio.h>
int main(){
    FILE *f1,*f2;
    f1=fopen("1st.txt","r");
    f2=fopen("2nd.txt","w");
    char ch;
    ch=fgetc(f1);
    while(ch!=EOF){
    fprintf(f2,"%c",ch);
    ch=fgetc(f1);
    }
    fclose(f1);
    fclose(f2);
    return 0;
}
*/

// Q2..Write a C program to create a file named myfile and write content that the user types from the keyboard till the user enters 0.
/*
#include<stdio.h>
int main(){
    FILE *f1;
    f1=fopen("myfile.txt","w");
    char ch;
    printf("Enter content (0 to exit): ");
    scanf("%c",&ch);
    while(ch!='0'){
        fprintf(f1,"%c",ch);
        scanf("%c",&ch);
    }
    fclose(f1);
    return 0;
}
*/

//Write a C program that creates a file reading contents that the user types from the keyboard till EOF. The text in this file must be in lowercase. There could be multiple blanks in between some words. Create another file in which the same content is copied in UPPERCASE and with only one blank in between the words that contained multiple blanks.
