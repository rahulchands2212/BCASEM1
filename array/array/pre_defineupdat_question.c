/*

10 20 30 40 50
Task:
Index 2 ki value ko 999 se update karo.

*/

#include<stdio.h>
int main(){
    //define array define array;
    int arr[5] = {10,20,30,40,50};

    //print array before update ;
    printf("array before update = ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    //change line;
    printf("\n");

    //using traverse then update;
    for(int i=0;i<5;i++){
        if(i==2){
            arr[i]= 999;
        }
    }

    //print result and statement;
    printf("array after update = ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}