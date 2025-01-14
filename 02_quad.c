#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    float dis,r1,r2;
    float img,real;
    printf("Enter the co-efficients of the equation(a!=0):-->");
    scanf("%f%f%f",&a,&b,&c);
    dis=((b*b)-(4*a*c));
    if(dis==0){
        r1=r2=-b/2*a;
        printf("Roots are real and equal they are \n");
        printf("Root 1 = %f \t Root 2 = %f",r1,r2);
    }
    else if(dis>0){
        r1=(-b+(sqrt(dis)))/(2*a);
        r2=(-b-(sqrt(dis)))/(2*a);
        printf("Roots are real and distinct they are \n");
        printf("Root 1 = %f \t Root 2 = %f",r1,r2);
    }
    else if(dis<0){
        real=-b/(2*a);
        img=sqrt(-dis) / (2*a);
        printf("Roots are imagenary they are \nThe roots 1 = %.2f + %.2fi \t root 2 =  %.2f - %.2fi\n",real,img,real,img);  
    }
    return 0;
}

