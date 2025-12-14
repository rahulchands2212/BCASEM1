#include<stdio.h>

//user define function;
int sum(int a , int b){         //(int a ,int b )  is parameter ;
    return a+b;
}

//pre define fun
int main(){
    int x,y;    //define data type;
    printf("enter number x and y = ");  //take input;
    scanf("%d %d",&x,&y);
    printf("sum = %d",sum(x,y));    //call fun by argument ;

    return 0;
}