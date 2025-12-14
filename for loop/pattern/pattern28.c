#include<stdio.h>
int main(){
    int i,j,k;
    // first half of pattern;
    for(i=1;i<=5;i++){        
        for(k=5;k>i;k--){       
            printf("_");
        }for(j=1;j<=i;j++){     
            printf("* ",j);
        }
          printf("\n");
        }     
         // second half of pattern;
            for(i=4;i>=1;i--){
                for(k=4;k>=i;k--){
                    printf("_");
                }for(j=1;j<=i;j++){
                    printf("* ",j);
                }
                printf("\n");
            }
        
      
    
    return 0;
}