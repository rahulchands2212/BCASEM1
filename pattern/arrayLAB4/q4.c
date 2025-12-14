/*
 An array contains 10 integers. Receive
the number to be searched in the
array as input. Write a program to search
this number in the array and
display the number of times it occurs in
the array.
*/

#include<stdio.h>
int main(){
    //define array and take input from user ;
    int arr[10];
    printf("enter 10 integers number = ");
    
    //insert;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    //insert target from user;
    int target;
    printf("enter target element = ");
    scanf("%d",&target);

    //traverse array;
    int count=0;
    for(int i=0;i<10;i++){
        if(arr[i]==target){
            count++;
        }
    }

    //print output;
    printf("%d occurs %d time",target,count);

    return 0;

}