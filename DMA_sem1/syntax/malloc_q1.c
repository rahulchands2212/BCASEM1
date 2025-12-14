/*
write a function calculate 5 price in memory
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    //we can assign the value of memory by user;
    ptr = (float *)malloc(5*sizeof(float));     //assign memory for 5 float value ;

    //input in assign memory;
    for(int i=0;i<5;i++){
        printf("enter price of %d item = ",i+1);
        scanf("%f",&ptr[i]);
    }

    //add all prices ;
    float sum =0;
    for(int i=0;i<5;i++){
        sum+=ptr[i];
    }

    //print price;
    printf("total price = %.2f",sum);

    return 0;

    
}