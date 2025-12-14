#include<stdio.h>
int main(){
    int n,r,rev=0;
    printf("enter number n = ");
    scanf("%d",&n);
    //starting while loop;
    while(n>0){
        r=n%10;
        n/=10;          //we direct print the value of r with store value of r in rev;
        rev=rev*10+r;
    }
    printf("reverse of is = %d",rev);
    return 0;
}