/* Write a C program to check whether a number is
Positive, Negative, or Zero.*/

#include<stdio.h>  //header file.

int main(){

int number;	//Define variable.

printf("enter number : ");
scanf("%d",&number);	//take input by user;

if(number>0){
printf("%d is positive number",number);
}else if(number == 0){
printf(" %d is zero",number);
}else{
printf("%d is negative number",number);
}

return 0;
}