#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;   //pointer declared;

    //input how many blocks need;
    int n;
    printf("enter how many space need (block) : ");
    scanf("%d",&n);

    //assign blocks with the help of calloc;
    ptr = (int *)calloc(n,sizeof(int));

    //print;
    for(int i=0;i<5;i++){
        printf("%d\n",ptr[i]);
    }

    return 0;
}