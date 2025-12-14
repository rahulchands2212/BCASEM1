#include<stdio.h>
int main(){
    int i,n,factorial=1;
    printf("enter number n = ");
    scanf("%d",&n);
    //starting while loop;
    i=n;
    while(i>=1){
        factorial*=i;   //storing factorial;
        if(i!=1){
            printf("%d x ",i);
        }else{
            printf("%d = %d",i,factorial);
        }
        i--;
    }
    return 0;
}