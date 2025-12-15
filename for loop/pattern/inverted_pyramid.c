#include<stdio.h>
int main(){
    //outer row loop;
    for(int i=6;i>=1;i--){
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