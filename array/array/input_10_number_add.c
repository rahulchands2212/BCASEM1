#include<stdio.h>

int main(){

    int num[10];     //declared array;
    int sum =0;     //declared variable for store added number;
    int label=1;    //use for only good formating;

    //start loop for multiple input;
    for(int i=0;i<10;i++){
        printf("enter number %d = ",label);
        scanf("%d",&num[i]);        //store in put on array;

        sum+=num[i];        //store added value in sum;
        label++;
    }
    //print sum;
    printf("sum = %d",sum);

    return 0;

}