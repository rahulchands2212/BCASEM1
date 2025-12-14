#include<stdio.h>
int main(){
    int quantity;
    float price;
    printf("enter quantity and price(per item)=");
    scanf("%d %f",&quantity,&price);

    if(quantity>1000){
        float expan = (quantity*price*10)/100;      //use for  10% discount find  ;
       
        float total_expance = (quantity*price) - expan;     //  total expenses - 10% discount ;
        printf("total expenses(include 10%% off) = %.2f",total_expance);    //print total expenses after 10% discount ;
    }else{
        printf("total expenses = %.2f",quantity*price);
    }
    return 0;
}