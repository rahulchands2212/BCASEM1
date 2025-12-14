#include<stdio.h>
int main(){
    //outer loop row 6 when i =4 skip because of pattern;
    for(int i=6;i>=1;i--){
        if(i==4){
            continue;
        }
        //first inner loop for space;
        for(int k=6;k>i;k--){   
            printf("  ");
        }
        //second inner loop for print star;
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        //change row;
        printf("\n");
    }
    return 0;
}