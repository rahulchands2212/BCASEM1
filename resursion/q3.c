/*
factorial */

#include<stdio.h>

int fact(int n){
    if(n==1){
    return 1;
    }

    int factf =    fact(n-1);

int faco = n*factf;
return faco;

}

int main(){
    printf("answer = %d",fact(5));
    return 0;
}