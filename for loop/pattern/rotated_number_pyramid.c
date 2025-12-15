#include<stdio.h>
int main(){
    //outer loop for row;
    for(int i=1;i<=4;i++){
        //inner first loop for space;
        for(int k=i;k<4;k++){
            printf("  ");
        }
        //inner second  loop ;
        for(int j=i;j<=(i*2)-1;j++){
            printf("%d ",j);  
            
        }
        //change row;
        printf("\n");
    }
    return 0;
}