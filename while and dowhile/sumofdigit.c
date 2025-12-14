#include<stdio.h>
int main(){
    int n,r;
    int sum=0;
    printf("enter number n = ");
    scanf("%d",&n);
    //start while loop;
    while(n>0){
        r=n%10;
        n/=10;
        sum+=r;
    }
    printf("sum of digit = %d",sum);
    return 0;
}