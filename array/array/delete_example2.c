#include<stdio.h>
int main(){
    //target index = 2 means element 15;
    int arr[5]  = {5,10,15,20,25} ;

    for(int i=2;i<5-1;i++){
        arr[i] = arr[i+1];

        
    }

    for(int i=0;i<5-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}