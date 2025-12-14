/*
5   10   15   10   25
Task:
Array me jahan-jahan 10 hai, sabhi 10 ko 999 se update kar do.
*/

#include<stdio.h>
int main(){
    //pre define array;
    int arr[5]= {5,10,15,10,25};

    //print array before update;
    printf("array before update = ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    //change line ;
    printf("\n");

    //traverse array then replace 10 with 999;
    for(int i=0;i<5;i++){
        if(arr[i]==10){
            arr[i]=999;
        }
    }

    //print array after update;
    printf("array after update = ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}