#include<stdio.h>
int main(){
    //define array ;
    int arr[10];
    printf("enter 10 number = ");

    //insert
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    //print before swap;
    printf("before swap = ");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

    //change line;
    printf("\n");
    //traverse
    int temp;
    for(int i=0;i<10-1;i++){
        if(arr[i]%2==0){
            if(arr[i+1]%2!=0){
                temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }else{
            if(arr[i+1]%2==0){
                temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }

    }
    //print after swap
    printf("after swap = ");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}