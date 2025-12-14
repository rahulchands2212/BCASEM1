#include<stdio.h>
#include<math.h>
int main(){
float p,r,n,add,pow,pow2,amount,divide,ci;
printf("enter number p = ");
scanf("%f",&p);

printf("enter number r = ");
scanf("%f",&r);

printf("enter number  n = ");
scanf("%f",&n);

add = 100+r;
pow = powf(add,n);
pow2 = powf(100,n);
divide = pow/pow2;
amount = p*divide;
ci = amount-p; 

printf("the amount is = %.2f\n",amount);
printf("the compound interest is = %.2f",ci);
return 0;

}