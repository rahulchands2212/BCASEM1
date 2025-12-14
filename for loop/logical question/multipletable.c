#include<stdio.h>
// print multiple table in vertical;
int main(){
    int n;
    printf("enter number n : ");
    scanf("%d",&n);
    
    for(int i=1;i<=10;i++){
         for(int j=1;j<=n;j++){
            printf("%d x %d = %d    ",j,i,i*j);
        }
        printf("\n");
      
    }
    return 0;
}