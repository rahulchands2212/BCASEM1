/*
Ten numbers are entered from the
keyboard into an array.
Write a program to find out how many of
them are positive, how
many are negative, how many are even and
how many odd.
*/

#include<stdio.h>
int main(){
    //define array and take 10 element input from user;
    int arr[10],i;
    printf("enter 10 number = ");

    //insert;
    for( i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    //traverse array and define variable;
    int positive=0,negative=0,even=0,odd=0;
    for( i=0;i<10;i++){
        if(arr[i]>0){
            positive++;
        }else if(arr[i]<0){
            negative++;
        }

        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }

    }

    //print output;
    printf("positive element on  array = %d\n",positive);
    printf("negative element on  array = %d\n",negative);
    printf("even element on  array = %d\n",even);
    printf("odd element on  array = %d\n",odd);

    return 0;
}
