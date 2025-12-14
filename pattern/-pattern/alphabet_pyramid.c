#include<stdio.h>
int main(){
    //outer loop;
    for(char i='A';i<='D';i++){
        //inner loop;
        for(char j='A';j<=i;j++){
            printf("%c ",i);
        }
        //change row;
        printf("\n");
    }
    return 0;
}