#include<stdio.h>
int main(){
    int arr[5];

    printf("enter 5 element = ");

    //input ;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    //print before delete target;
    printf("print  array before delete target = ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    //change line;
    printf("\n");

    //target element index 2;
    for(int i=2;i<5-1;i++){
        arr[i] = arr[i+1];
    }

    //print element after remove target;
    printf("print array after delete target  = ");
    for(int i=0;i<5-1;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}