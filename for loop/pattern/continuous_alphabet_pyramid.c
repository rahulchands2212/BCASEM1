#include<stdio.h>
int main(){
    char start='A';
    //outer loop for row;
    for(int i=1;i<=4;i++){
        //inner loop for print alphabet;
        for(int j=1;j<=i;j++){
            printf("%c ",start);
            start++;
        }
        //change row;
        printf("\n");
    }
    return 0;
}