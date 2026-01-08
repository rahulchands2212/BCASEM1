#include<stdio.h>
#include<string.h>

int main(){
    char arr[20];

    printf("enter string not more than 20 char : ");
    fgets(arr,20,stdin);
strrev(arr);
    
    printf("reverse string : %s",arr);

    return 0;
}