/*

A 
B C
D E F
G H I J
K L M N O


*/

#include<stdio.h>
int main(){
    int i,j,last=65;
    for(i=0;i<=4;i++){
        for(j=65;j<=65+i;j++){
            printf("%c ",last);
            last++;
        }
        printf("\n");
    }
    return 0;
}