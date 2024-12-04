// termwork 3 :3.	An electricity board charges the following rates for the use of electricity: for the first 200 units 80 paise per unit: for the next 100 units 90 paise per unit: beyond 300 units Rs 1 per unit. All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more than Rs 400, then an additional surcharge of 15% of total amount is charged.

#include<stdio.h>
int main(){
    float unit,charge;
    printf("Enter the units consumed : ");
    scanf("%f",&unit);
    charge=100;
    if(unit<0){
        printf("Invalid !...");
        return 0;
    }
    if(unit>0&&unit<=200){
        charge=charge+0.8*unit;    //for unit 0-->200 range
    }
    else if(unit>200&&unit<=300){
        charge=charge+0.8*200+0.9*(unit-200);  // For 200-->300 range
    }
    else if(unit>300){
        charge=charge+(0.8*200)+0.9*(100)+(unit-300);    //for 300+ unit
    }
    if(charge>400){
        charge=charge+charge*0.15;
    }
    printf("Total amount is = %f",charge);
    return 0;
}