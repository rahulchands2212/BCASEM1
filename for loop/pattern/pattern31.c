/*
* * * * * * * * * * 
* * * * _ _ * * * *
* * * _ _ _ _ * * *
* * _ _ _ _ _ _ * *
* _ _ _ _ _ _ _ _ *
* * _ _ _ _ _ _ * *
* * * _ _ _ _ * * *
* * * * _ _ * * * *
* * * * * * * * * *

*/

#include<stdio.h>
int main(){
   int i,j,k;
   /*this part for 1st and 2nd part of the pattern */
   for(i=5;i>=1;i--){       
    for(j=i;j>=1;j--){      
        printf("* ");       // this whole part of loop for 1st part of the pattern ;
    }for(k=5;k>i;k--){
        printf("_ ");
    }if(i>=1){
        for(k=5;k>i;k--){
            printf("_ ");       // this whole part of loop for 2nd part of the pattern ;
        }for(j=i;j>=1;j--){
            printf("* ");
        }
    }
    printf("\n");
   }
   /* for 3 and 4 part of the pattern */
   for(i=2;i<=5;i++){
    for(j=1;j<=i;j++){
        printf("* ");       // this whole part of loop for 3rd part of the pattern ;
    }for(k=5;k>i;k--){ 
        printf("_ ");
    }if(i<=5){
        for(k=5;k>i;k--){
            printf("_ ");       // this whole part of loop  for 4rh parth of the pattern ;
        }for(j=1;j<=i;j++){
            printf("* ");
        }
    }
    printf("\n");
   }
    return 0;
}