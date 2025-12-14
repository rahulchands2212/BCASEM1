#include<stdio.h>
int main(){
    int i,sum=0,n;
    printf("enter number n = ");
    scanf("%d",&n);
    //starting while loop;
    i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("sum : %d",sum);
    return 0;

}