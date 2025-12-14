/*
Write a program to pick up the largest
number from a 5 row by 5
column matrix.
*/

#include<stdio.h>
int main(){
    //define 2d array and take input;
    int arr[5][5],i,j;
    printf("enter total 25 element for (5x5) matrix :\n");

    //insert the array;

    //outer i loop for row;
    for(i=0;i<5;i++){
        //inner j loop for column;
        for( j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    //traverse the array;

    //assume that index arr[0][0] is already largest;
    int largest = arr[0][0];
    //outer i loop for row;
    for( i=0;i<5;i++){
        //inner j loop for column;
        for( j=0;j<5;j++){
            if(largest<arr[i][j]){
                largest = arr[i][j];
            }
        }

    }

    //print output;
    printf("the largest number on (5x5) matrix = %d",largest);

    return 0;
    
}
