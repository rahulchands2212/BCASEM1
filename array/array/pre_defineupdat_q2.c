/*
4   7   7   9   7
Task:
Sirf pehla 7 jo array me milta hai,
usko 111 se update karo.
*/

#include<stdio.h>
int main(){
    //pre define array;
    int arr[5]={4,7,7,9,7};

    //print before update;
    printf("array before update = ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    //change line;
    printf("\n");

    //traverse then update only first 7;
    for(int i=0;i<5;i++){
        if(arr[i]==7){
            arr[i] = 111;
            break;
        }
    }

    //print after update;
    printf("array after update = ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}