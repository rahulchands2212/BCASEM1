/*

* * * * * 
* * * *
* * *
* *
*

*/


#include<stdio.h>
int main(){
	int i,j;
    for(i=5;i>=1;i--){        //use this loop for vertical lines;
        for( j=1;j<=i;j++){  //use this loop for horizontal line; 
            printf("* ");
        }
        printf("\n");   //for next line;ṇ
    }
    return 0;
}
