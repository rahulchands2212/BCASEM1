#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter number n = ");
    scanf("%d",&n);

    // or first part logic;
    for(i=1;i<=n;i++){
        for(k=n;k>i;k--){
            printf(" ");
        }for(j=i;j<=i;j++){
                printf("%d",i);           //first part  end;
            }
            // for second part logic;
            for(k=1;k<=i;k++){
                printf(" ");
            }for(j=1;j<=i;j++){
                if(j==i){
                    printf("%d",i);
                }else{
                    printf(" ");
                }
            }
            printf("\n"); 
    }      // first half and second part logic completed;
            
    //second half started;

    //3rd part logic start;
    for(i=n-1;i>=1;i--){
        for(k=n-1;k>=i;k--){
            printf(" ");
        }for(j=i;j>=i;j--){
            printf("%d",i);
            
            //3rd part logic complete;
        }
        // 4rt part logic start;
        for(k=1;k<=i;k++){
            printf(" ");
        }for(j=1;j<=i;j++){
            if(j==i){
                printf("%d",i);
            }else{
                printf(" ");
            }   //4rd part logic end;
        }
        printf("\n");
    } 
    
return 0;
}