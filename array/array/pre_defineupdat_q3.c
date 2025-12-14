/*
8   3   5   3   7   3
Task:
Array me aakhri (last) 3 ko 111 se update karo.
Baaki sab 3 ko same rehne do.
*/

#include<stdio.h>
int main(){
    //pre define array;
    int arr[6] = {8,3,5,3,7,3};

    //count how many 3 in array and print before update array with statement;
    int count =0;
    printf("array before update = ");
    for(int i=0;i<6;i++){
        if(arr[i]==3){
            count++;        
        }

        printf("%d ",arr[i]);
    }

    //change line;
    printf("\n");

    //traverse then update;
    for(int i=0;i<6;i++){
        if(arr[i]==3){
            if(count==1){
                arr[i]=111;
            }else{
                count--; 
            }
                
        }
    }

    //print after update;
    printf("array after update = ");
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}