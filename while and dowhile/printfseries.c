#include<stdio.h>
int main(){
    int i;
    i=1;
    while(i<=10){
        if(i%2==0){
            printf("-%d\t",i*i);
        }else{
            printf("%d\t",i*i);
        }
        i++;
    }
    return 0;
}