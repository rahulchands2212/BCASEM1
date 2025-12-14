#include<stdio.h>
int main(){
    int i,k,j;
    for(i=5;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("%d",j);
        }for(k=5;k>i;k--){
            printf("_");
        }
        printf("\n");
    }
    return 0;
}