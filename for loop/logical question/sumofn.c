#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter number n = ");    
    scanf("%d",&n);
    printf("1 + ");
    for(i=2;i<=n;i++){
        sum+=i;
        if(i==n){
            printf("1/%d = 1/%d",i,sum+1);
        }else{
            printf(" 1/%d + ",i);
        }
    }
    return 0;
}