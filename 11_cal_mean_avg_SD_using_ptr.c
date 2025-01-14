//Done by me
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i,Num;
    float Mean = 0.0, Variance = 0.0, Sd = 0.0,Array[100],Sum=0.0;
    float *ptr;

    printf("\nEnter the number of Values : ");
    scanf("%d",&Num);
    ptr = Array; 
/*    fptr = (float*)malloc(iNum*sizeof(float));*/
    printf("\nEnter %d values\n", Num);
    for(i=0; i<Num; i++)
    {
        scanf("%f",ptr+i);
        Sum += *(ptr+i);		//fSum += fptr[i]; this is also valid
    }
    Mean = Sum/Num;

    for(i=0; i<Num; i++)
    {
        Variance += (ptr[i] - Mean)*(ptr[i] - Mean);
		    }
    Variance /= Num;
    Sd = sqrt(Variance);
    printf("\nThe values entered are");
    for(i=0; i<Num; i++)
    {
        printf("\t%g",ptr[i]);        //printf("\n\t%f",*(fptr+i));
    }
    printf("\n");

    printf("\n*************************************************\n");
    printf("\tSum\t = \t%g\n\tMean\t = \t%g\n\tVariance = \t%g\nStandard Deviation = \t%g",Sum,Mean,Variance,Sd);
    printf("\n*************************************************\n");
    return 0;
}



//Done by madam
/*#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i,Num;
    float Mean = 0.0, Variance = 0.0, Sd = 0.0,Array[100],Sum=0.0;
    float *ptr;

    printf("\nEnter the number of Values : ");
    scanf("%d",&Num);
    ptr = Array; 

    printf("\nEnter %d values\n", Num);
    for(i=0; i<Num; i++)
    {
        scanf("%f",ptr+i);
        Sum += *(ptr+i);		//fSum += fptr[i]; this is also valid
    }
    Mean = Sum/Num;

    for(i=0; i<Num; i++)
    {
        Variance += (ptr[i] - Mean)*(ptr[i] - Mean);
		    }
    Variance /= Num;
    Sd = sqrt(Variance);
    printf("\nThe values entered are");
    for(i=0; i<Num; i++)
    {
        printf("\t%g",ptr[i]);        //printf("\n\t%f",*(fptr+i));
    }
    printf("\n");

    printf("\n**\n");
    printf("\tSum\t = \t%g\n\tMean\t = \t%g\n\tVariance = \t%g\nStandard Deviation = \t%g",Sum,Mean,Variance,Sd);
    printf("\n**\n");
    return 0;
}*/