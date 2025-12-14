/*
create a program for print number 1 to n by recursion
*/

#include<stdio.h>

void num(int i,int n){
    if(i==n){   //base condition;
        printf("%d",i);     //print the match found number;
        return;
    }   
    printf("%d\t",i);   //print digit;
    num(i+1,n); //recursion;
}

int main(){
    int x;
    printf("enter number : ");
    scanf("%d",&x);

    num(1,x);

    return 0;
}