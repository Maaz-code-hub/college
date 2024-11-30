#include<stdio.h>
int main(){
    float a,b;
    char op;
    printf("Enter the expression:-->");
    scanf("%f%c%f",&a,&op,&b);
    switch(op){
        case '+':printf("Result = %f",a+b);
        break;
        case '-':printf("Result = %f",a-b);
        break;
        case '*':printf("Result = %f",a*b);
        break;
        case '/':printf("Result = %f",a/b);
        break;
    }
    return 0;
}