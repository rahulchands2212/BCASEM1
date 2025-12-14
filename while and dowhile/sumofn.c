#include<stdio.h>
int main(){
    int n,sum=0;
    printf("n:: ");
    scanf("%d",&n);
    while(n>0){
        sum+=n;
        n--;
    }
    printf("sum = %d",sum);
    return 0;
}
