#include<stdio.h>
int main(){
    int i,k,j;
    for(i=1;i<=5;i++){  //use this loop for vertical lines;
    for(k=5;k>i;k--){  // use for space; 
        printf("_");
    }for(j=1;j<=i;j++){     //use this loop for horizontal line; 
        printf("* ",j);
    }
    printf("\n");   //for next line;
    }
    return 0;
}