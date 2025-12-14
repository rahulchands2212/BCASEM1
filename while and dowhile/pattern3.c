#include<stdio.h>
int main(){
    int i,j;         //i used for row j is used for coloumn;
    i=1;
    while(i<=5){
        j=1;           //local variable ;
        while(j<=i){
            printf("%d ",j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}