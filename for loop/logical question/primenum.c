#include<stdio.h>
int main(){
    int n;
    printf("enter number = ");
    scanf("%d",&n);
if(n==1||n==0){
    printf("not prime ");
    return 0;
}else if(n==2){
    printf("prime number ");
    return 0;
}else if(n%2==0){
    printf("not a prime number ");
    return 0;
}for(int i=3;i*i<=n;i+=2){
    if(n%i==0){
        printf("not prime number");
        return 0;
    }
}

printf("prime number");
return 0;
}