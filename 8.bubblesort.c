#include<stdio.h>      //1 4 2 5 3 9 5 try it once
int main(){
    int Arr[100];
    int n;
    int end,temp;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter th elements need to be sorted :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&Arr[i]);
    }
    //Bubble sorting process
    end=n;
    while(end!=1){
        for(int i=0;i<n;i++){
            if(Arr[i]>Arr[i+1]){
                temp=Arr[i];
                Arr[i]=Arr[i+1];
                Arr[i+1]=temp;
            }
        }
        end--;
    }
    printf("The sorted array is -->\n");
    for(int i=0;i<n;i++){
        printf("%d\t",Arr[i]);
    }
    return 0;
}