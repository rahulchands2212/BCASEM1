/*
Write a program that interchanges
elements at odd position with
elements at even position in an array of 10
elements.
*/

#include<stdio.h>
int main(){
    //define array and take 10 element input from user;
    int arr[10];
    printf("enter 10 element = ");
int i;
    for( i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    //traverse array ;
    for( i=0;i<10;i+=2){
    int temp = arr[i];
    arr[i] = arr[i+1];
    arr[i+1] = temp;
    }

    //print output ;
    printf("array after inter change element = ");
    for( i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
