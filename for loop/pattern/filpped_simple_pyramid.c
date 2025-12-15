#include<stdio.h>
int main(){
    //outer row loop;
    for(int i=1;i<=6;i++){
        if(i==4){
            continue;
        }
        //inner first loop for space;
        for(int k=6;k>i;k--){
            printf("  ");
        }
        //inner second loop;
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
        
    }
    return 0;
}