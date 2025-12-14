#include<stdio.h>

int main(){
    //take input and define data type of variable;
    int s;
    printf("enter array size = ");
    scanf("%d",&s);

    //declared array;
    int arr[s];

    //print statement ;
    printf("enter element of array = ");

    //take insert element on array with the help of loop;
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }

    //traverse 
    int max = arr[0];   //assume that max = arr[0];
    int min = arr[0];   //assume that min = arr[0];
    for(int i=0;i<s;i++){

        //conditon for max;
        if(arr[i]>max){     //then compare with other element;
            max = arr[i];
        }

        //condition for min
        if(arr[i]<min){
            min = arr[i];
        }

    }

    //print max element on array;
    printf("max element on array = %d\n",max);

    //print min element on array;
    printf("min element on array = %d",min);

    return 0;
}