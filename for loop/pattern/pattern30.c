#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter number n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){          // for number of row;
        for(j=1;j<=n*2-1;j++){          // for number of colum;      
            if(j<=i||j>=n*2-i){       
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
/*
j<=i is used for left side of half triangle.
j>=n*2-i is used for right side of triangle .
*/