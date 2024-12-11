#include<stdio.h>      //1 4 2 5 3 9 5 try it once
int main(){
    int Arr[100];
    int n,i,j;
    int temp;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter th elements need to be sorted :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&Arr[i]);
    }
    //Bubble sorting process
    
        for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(Arr[i]>Arr[i+1]){
                temp=Arr[i];
                Arr[i]=Arr[i+1];
                Arr[i+1]=temp;
            }
        }
        }
    printf("The sorted array is -->\n");
    for(i=0;i<n;i++){
        printf("%d\t",Arr[i]);
    }
    return 0;
}