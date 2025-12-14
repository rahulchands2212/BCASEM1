#include<stdio.h>
int main(){
    //define data type and take input of array size;
    int s;
    printf("enter array size = ");
    scanf("%d",&s);

    //print statement;
    printf("enter %d  element = ",s);

    //declared array and take input throught for loop;
    int arr[s];
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }

    //reversing the array;
    for(int i=0;i<(s/2);i++){
        arr[i] = arr[i] + arr[s-(i+1)];
        arr[s-(i+1)] = arr[i] - arr[s-(i+1)];
        arr[i] = arr[i] - arr[s-(i+1)];
    }

    //print statement ;
    printf("reverse of array = ");
    //print the reverse array with help of for loop;
    for(int i=0;i<s;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}