#include<stdio.h>
int main(){
    //outer loop for row;
    for(int i=5;i>=1;i--){
        //inner first loop for space;
        for(int k=5;k>i;k--){
            printf(" ");
        }
        //inner second loop for star;
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        //change row;
        printf("\n");
    }
    return 0;
}