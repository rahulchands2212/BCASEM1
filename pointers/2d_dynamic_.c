/*
working of 2d dynamic pointer 
*/

#include<stdio.h>

int main(){
    int a = 5;

    int *ptr = &a;      // pointer to int
    int **pptr = &ptr;  // pointer to pointer

    printf("a = %d\n", a);
    printf("ptr = %p\n", ptr);
    printf("*ptr = %d\n", *ptr);
    printf("**pptr = %d\n", **pptr);
    

    return 0;
}
