#include<stdio.h>
int main (){
    char i,k,j;
    for(i='a';i<='e';i++){
        for(k='e';k>i;k--){
            printf("_");
        }for(j='a';j<=i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}