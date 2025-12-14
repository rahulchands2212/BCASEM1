/*
fibonachi series
*/

#include<stdio.h>

void fibo(int n,int f,int s){
    if(n==0){
        return;
    }
    printf("%d\t",f);
    int r=f;
    f=f+s;
    s=r;

    fibo(n-1,f,s);
}

int main(){
    fibo(10,0,1);
}

