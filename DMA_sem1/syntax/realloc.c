/*
allocated 5 numebr then increase dynamicly increase it to 8 number
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;   //declared pointer;
    ptr = (int *)calloc(5,sizeof(int));         //assign 5 block for number

    //input 5 number;
    printf("enter 5 number \n");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }

    //increse the size of memory ;
ptr = realloc(ptr,8);

//take input;
 printf("enter 8 number \n");
    for(int i=0;i<8;i++){
        scanf("%d",&ptr[i]);
    }

//print;
printf("result \n");
 for(int i=0;i<8;i++){
       printf("%d number = %d\n",i,ptr[i]);
    }
    
    return 0;

}