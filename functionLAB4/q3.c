/*
Define a function to convert any given
year into its Roman equivalent.
Use these Roman equivalents for decimal
numbers: 1 - 1, 5 - V, 10 - X,
50 - L, 100 – С, 500 - D, 1000 – М.
Example:
Roman equivalent of 1988 is
mdcccclxxxviii.
Roman equivalent of 1525 is mdxxv.
*/

#include<stdio.h>

//create function for roman;
void roman(int n){
    while(n>=1000){
        printf("M");
        n = n-1000;
    }

    while(n>=500){
        printf("D");
        n = n-500;
    }

    while(n>=100){
        printf("C");
        n = n-100;
    }

    while(n>=50){
        printf("L");
        n = n-50;
    }

    while(n>=10){
        printf("X");
        n = n-10;
    }

    while(n>=5){
        printf("V");
        n = n-5;
    }

    while(n>=1){
        printf("I");
        n = n-1;
    }

    
}

//main function;
int main(){
    int year;
    printf("enter year = ");
    scanf("%d",&year);

    roman(year);    //call function;

    return 0;
}



