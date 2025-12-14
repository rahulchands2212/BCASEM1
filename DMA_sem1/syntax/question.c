/*
allocate memory to store first 5 odd numbers then reallocate
it to store first 6 even number */

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *)calloc(5,sizeof(int));

    //input odd;
    printf("input first 5 odd number \n ");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }

    //reallocate;
    ptr = realloc(ptr,6);

    //input even;
    printf("enter first 6 even number \n");
    for(int i=0;i<6;i++){
        scanf("%d",&ptr[i]);
    }

    //print output;
    for(int i=0;i<6;i++){
        printf("%d\t",ptr[i]);
    }
    
    free(ptr);

    return 0;
}