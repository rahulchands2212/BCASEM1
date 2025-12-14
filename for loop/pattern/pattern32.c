/*

* 
* *
* _ *
* _ _ *
* _ _ _ *
* _ _ _ _ *
* _ _ _ _ _ *
* _ _ _ _ _ _ *
* _ _ _ _ _ _ _ *
* _ _ _ _ _ _ _ _ *
* _ _ _ _ _ _ _ _ _ *
* * * * * * * * * * * *

*/

#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=12;i++){
        for(j=1;j<=i;j++){
            if(j==1||j==i||i==12){
                printf("* ");
            }else{
                printf("_ ");
            }
        }
        printf("\n");
    }
    return 0;
}
