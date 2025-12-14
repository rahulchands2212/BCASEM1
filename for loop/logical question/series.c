#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter number n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i==n){
            printf("%d = %d ",i,sum+n);
        }else if (i%2!=0){
             sum+=i;
            printf("%d + ",i);
        }    
    }
    return 0;
}