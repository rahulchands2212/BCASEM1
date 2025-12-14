#include<stdio.h>
int main (){
    int i,j;
    for( i=1;i<=5;i++){     //this loop is using for row;
        for(int k=1;k<i;k++){   //this loop is using for column for space;
                printf("_");
            }
        for(j =i;j<=5;j++){     //this loop column for digit;
            printf("%d",j);
           
        }
        printf("\n");
    }  
    return 0;
}