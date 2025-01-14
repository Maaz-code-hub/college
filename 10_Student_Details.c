//Done by me
//Structure Program to input and Output Student Details
#include <stdio.h>
struct Student 
{
    char name[50];
    int roll_no;
    float marks;
}S[10];
int main() 
{
    int n,i;
    float sum = 0,avg=0.0;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for (i=0;i<n;i++) 
    {
        printf("\nEnter details for Student %d:-\n", i + 1);
        printf("Name: ");
        scanf("%s",S[i].name);
        printf("Roll No.: B-");
        scanf("%d",&S[i].roll_no);
        printf("Marks: ");
        scanf("%f",&S[i].marks);
        sum+=S[i].marks;
    }
    avg = sum / n;
    printf("\nAverage marks of the class: %.2f\n", avg);
    printf("\nStudents scoring above average:-\n");
    for(i = 0;i < n;i++) 
    {
        if (S[i].marks > avg) 
        {
            printf("Name: %s \nRoll No.: %d \nMarks: %.2f\n", S[i].name,S[i].roll_no,S[i].marks);
        }
    }
    printf("\nStudents scoring below average:-\n");
    for (i = 0;i < n;i++) 
    {
        if (S[i].marks < avg) 
        {
            printf("Name: %s \nRoll No.: %d \nMarks: %.2f\n", S[i].name,S[i].roll_no,S[i].marks);
        }
    }
    return 0;
}






//Done by madam
/*#include<stdio.h>
#include<stdlib.h>
#define STRSIZE 30

struct student
{
	char Name[STRSIZE];
	char USN[11];
	int Marks;
}S[10];

int main(void)
{
	char students[100];
	int Num, i;
	double Avg = 0.0;
	
	printf("\nEnter the number of students : ");
	scanf("%d", &Num);

	printf("\nEnter the Student details\n");
	for(i=0;i<Num;i++)
	{
		printf("\n###############################");
		printf("\nName : "); 	scanf("%s", S[i].Name);
		printf("\nUSN : "); 	scanf("%s", S[i].USN);
		printf("\nMarks : "); 	scanf("%d", &S[i].Marks);
		Avg += S[i].Marks;
	}
	
	Avg /= Num;
	
	printf("\nThe average marks for the class is : %g\n", Avg);
	
	for(i=0;i<Num;i++)
	{
		printf("\n###############################");		
		printf("\nName\t: %s", S[i].Name);
		printf("\nUSN\t: %s", S[i].USN);
		printf("\nMarks\t: %d", S[i].Marks);
		if(S[i].Marks < Avg)
			printf("\nThe student has scored below average\n");
		else
			printf("\nThe student has scored above average\n");
	}
		
	return 0;
}*/