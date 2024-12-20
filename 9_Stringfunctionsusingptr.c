int Strlen(char Str1[20]);
void StrCmp(char Str1[20],char Str2[20]);
void StrCat(char Str1[20],char Str2[20]);
#include<stdio.h>
#include<string.h>
int main(){
    int n,choice,x;
    char Str1[20],Str2[20];
    first:
    printf("\n===================================\n");
    printf("Please select the operation :\n");
    printf("1.Strlen\n2.StrCmp\n3.StrCat\n");
    printf("===================================\n");
    scanf("%d",&choice);
    printf("Enter the first string\n");
    scanf("%s",Str1);
    printf("Enter the second string\n");
    scanf("%s",Str2);
    switch (choice){
    case 1: printf("The length of the string %s is %d\n",Str1,Strlen(Str1));
            printf("The length of the string %s is %d\n",Str2,Strlen(Str2));
            break;
    case 2:StrCmp(Str1,Str2);
           break;
    case 3:StrCat(Str1,Str2);
           break;
    default : printf("Not a vilid input!!!");
              printf("Plese select again:");
              goto first;
    }
    second:
    printf("\nPress 0 to quit and 1 to repeat : ");
    scanf("%d",&x);
    if(x==0){
        return 0;
    }
    else if(x==1){
        goto first;
    }
    else{
        printf("Invalid input!!!\nPlease try again: ");
        goto second;
    }
}



int Strlen(char Str1[20]){
    int count=0;
    for(int i=0;Str1[i]!='\0';i++){
        count++;
    }
    return count;
    // printf("Length of %s is %d\n",Str1,count);
}
void StrCmp(char Str1[20],char Str2[20]){
    int xyz;
    for(int i=0;Str1[i]!='\0';i++){
        for(int j=0;Str2[j]!='\0';j++){
            if(i==j){
                if(Str1[i]>Str2[j]){
                    // printf("%s is greater than %s",Str1,Str2);
                    xyz=1;
                    break;
                }
                else if(Str1[i]==Str2[j]){
                    // printf("%s is equal to %s",Str1,Str2);
                    xyz=0;
                    break;
                }
                else {
                    // printf("%s is grater than %s",Str2,Str1);
                    xyz=-1;
                    break;
                }
            }
        }
    }
    if(xyz==1) printf("%s is greater than %s",Str1,Str2);
    else if(xyz==0) printf("%s is equal to %s",Str1,Str2);
    else if(xyz==-1)  printf("%s is grater than %s",Str2,Str1);
}
void StrCat(char Str1[20],char Str2[20]){
    int x,y;
    x=Strlen(Str1);
    y=Strlen(Str2);
    for(int i=0;Str2[i]!='\0';i++){
    Str1[x+i]=Str2[i];
    }
    Str1[x+y]='\0';
    printf("The concatinated string is %s ",Str1);
}