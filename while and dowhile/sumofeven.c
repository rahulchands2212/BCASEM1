#include<stdio.h>
int main(){
    int n,r;
    int sum=0;
    printf("enter number n =  ");
    scanf("%d",&n);
    //start while loop;
    
 while(n>0){
     r=n%10;
    if(r%2==0){
        sum+=r;
    }
    n=n/10;
 }
    printf("sum of even number = %d",sum);
    return 0;
}