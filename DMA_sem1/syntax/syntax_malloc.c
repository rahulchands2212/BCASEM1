#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *)malloc(5*sizeof(int));     //using malloc
    //pointer variable = (type_casting) malloc (size * sizeof(data_type));

    printf("enter number \n ");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }

    printf("answer\n");
    for(int i=0;i<5;i++){
        printf("%d\n",ptr[i]);
    }

    return 0;
}