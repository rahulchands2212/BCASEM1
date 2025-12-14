#include<stdio.h>
int main(){
    int n,temp,i,r;
    int factorial,sum=0;
    //input value n;
    printf("enter number n = ");
    scanf("%d",&n);
    temp=n; //crate copy of n because we need in last;
    //start while loop
    while(temp>0){
        r=temp%10;
        temp/=10;
        //start second loop;
        i=r;
         factorial =1;
        while(i>=1){
            factorial*=i;
            i--;
        }
        sum+=factorial;
    }
    //for check strong number;
    if(sum==n){
        printf("%d is a strong number",sum);
    }else{
        printf("%d is not a strong number",sum);
    }

    return 0;
}