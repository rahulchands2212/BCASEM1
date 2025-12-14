/*
A 5-digit positive integer is entered
through the keyboard, write a
recursive function to calculate sum of
digits of the 5-digit number
*/

#include<stdio.h>

// create function for sum;
int sumf(int n){
    if(n>0){
        int r = n%10;                                                                
        return r+sumf(n/10);
    }else{
        return 0;
    }
}

int main(){
    int num;
    printf("enter 5 digit number = ");
    scanf("%d",&num);

    printf("sum of digits = %d",sumf(num));

    return 0;
}