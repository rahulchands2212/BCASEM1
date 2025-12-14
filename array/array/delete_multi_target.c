#include<stdio.h>
int main(){
    int arr[6] = {5,10,15,20,25,30};
    //for target 4 index;
    for(int i=4;i<6-1;i++){
        arr[i] =  arr[i+1];
    }

// for target 1 index;
    for(int i= 1;i<6-2;i++){
        arr[i] = arr[i+1];
    }

    //print result;
    for(int i=0;i<6-2;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

/*       KEY POINT 
   
1- target select from right to left;
2- in descending order me by index
3- number of target == number of loop
4- one more loop for print output;

*/
