/*
5 5 5 5 5 
4 4 4 4
3 3 3
2 2
1
*/
#include<stdio.h>
int main(){
    int i,j;          //i used for row j is used for coloumn;
    i=5;
    while(i>=1){
        j=1;            //local variable ;
        while(j<=i){
            printf("%d ",i);
            j++;
        }
        printf("\n");
        i--;
    }
    return 0;
}