#include<stdio.h>
int main(){
    //outer for row;
    for(int i=1;i<=6;i++){
        if(i==4){
            continue;
        }
        //inner for print star;
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        //change row;
        printf("\n");
    }
    return 0;
}