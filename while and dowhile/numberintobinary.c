#include<stdio.h>
int main(){
    int n,reminder=0,binary=0;
    printf("enter number = ");
    scanf("%d",&n);
    while(n>0){
        int r = n%2;
        printf("%d",r);
        reminder = reminder*10+r;
        n=n/2;
    }
    printf("%d\n",reminder);
    while(reminder>0){
        int r2 = reminder %10;
        binary =binary*10+r2;
        reminder = reminder/10;
    }
    printf(" binary is =%d",binary);
    return 0;
}