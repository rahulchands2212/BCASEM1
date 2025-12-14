#include<stdio.h>

int multi(int n){   //parameter function;
    return n*n*n;   //return value;
}

int main(){
    int x = 2;
    printf("in parameter function n = %d\n",multi(x));      //call by  value and print return type;
    printf("in main function x = %d",x);    //print original value of x;
    return 0;
}