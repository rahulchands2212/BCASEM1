#include<stdio.h>
int main(){
    //define data type and take input size of array;
    int s;
    printf("enter size of array = ");
    scanf("%d",&s);

    //define array and print statement ;
    int arr[s];
    printf("enter %d element on array = ",s);

    //(insert operation) take in input form user and store on array using for loop;
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }

    //(traverse operation) fetch(access) value one by one then perform task;
    for(int i=0;i<(s/2);i++){
        int temp = arr[i];
        arr[i] = arr[s-(i+1)];
        arr[s-(i+1)] = temp;
    }

    //print statement and output using for loop;
    printf("the reverse of array = ");
    for(int i=0;i<s;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}