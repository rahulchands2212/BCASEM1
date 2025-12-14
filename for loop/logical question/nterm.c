#include<stdio.h>
// sum of n natural number ;

int main(){
    int n,sum=0;
    printf("enter n number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
        printf("%d\t",i);
    }
    printf("\nthe sum is %d\n",sum);
return 0;
}