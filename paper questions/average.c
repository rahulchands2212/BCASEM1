/*average of n number by array */

#include<stdio.h>
int main(){
    int n;
    printf("enter size of array : ");
    scanf("%d",&n);
    //define array;
    int arr[n];

    //insert;
    printf("enter %d numbers :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //traverse;
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }

    //print average;
    printf("average : %.2f",(float)sum/n);

    return 0;
}