/*Write a C program to check whether a number is a palindrome or not*/

// palindrome means 1221; after reverse number both are same;

#include<stdio.h>

int main(){
    int number;     //define variable;
    printf("enter number : ");
    scanf("%d",&number);    //take input by user;


    int copy = number;  //COPY VARIABLE STORE;
    int reverse = 0;    //STORE REVERSE NUMBER ;

    //REVERSE THE NUMBER;
    while(copy>0){
        int r = copy%10;
        reverse = reverse*10+r;
        copy = copy/10;
    }

    //comparing orginal number and reverse number;
    if(reverse == number){
        printf("%d is palindrome number",reverse);
    }else{
        printf("%d is not a palindrome number",reverse);
    }

    return 0;

}