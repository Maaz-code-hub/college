#include<stdio.h>
int main(){
    int xyz[500];
    int n,k;
    int f,l,m;
    printf("No of elements in array:");
    scanf("%d",&n);
    f=0;l=n-1;
    printf("Enter the key word:");
    scanf("%d",&k);
    printf("Enter the elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&xyz[i]);
    }
    while(f<=l){
        
        m = (f + l) / 2;
   if(xyz[m]==k){
    printf("The match found at index %d",m);
    return 0;
   }
   else if(k>xyz[m]){
    f=m+1;
   }
   else if(k<xyz[m]){
    l=m-1;
   }
    }
        printf("The key %d was not found in the array.\n", k);
       return 0;
}
