#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if(i%2==0&&j%2!=0){ 
                printf("0");    // print for true statement;
            }else{
                printf("1");    // print for false statement;
            }

        }
        printf("\n");
    }
    return 0;
}