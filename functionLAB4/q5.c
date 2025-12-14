/*
A positive integer is entered through the
keyboard. Write a function
to obtain the prime factors of this number
*/

#include<stdio.h>

void primef(int n){
    int i;
    for(i=2;i<=n;i++){
        while(n%i==0){
            printf("%d ",i);
              n=n/i;
        }
      
    }
}

int main(){
    int x;
printf("enter positive number =  ");
scanf("%d",&x);
printf("prime factors :");
primef(x);
}