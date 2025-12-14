#include<stdio.h>
int main(){
    //outer row loop;
    for(int i=1;i<=4;i++){
        //inner loop for print i;
        for(int j=1;j<=i;j++){
            printf("%d ",i);
        }
        //change row;
        printf("\n");
    }
    return 0;
}