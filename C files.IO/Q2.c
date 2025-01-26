// Q2..Make a program to input student information from user & enter it to a file(name,age,CGPA)
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Q2.txt","w");
    char name[100];
    int age;
    float CGPA;
    printf("Enter the student name:");
    scanf("%s",name);
    printf("Enter the student age:");
    scanf("%d",&age);
    printf("Enter the student CGPA:");
    scanf("%f",&CGPA);

    fprintf(fptr,"Student name :%s\n",name);
    fprintf(fptr,"Student age :%d\n",age);
    fprintf(fptr,"Student CGPA :%f\n",CGPA);
    fclose(fptr);
}