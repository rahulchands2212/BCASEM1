#include<stdio.h>
// sum of first 10 natural number;

int main(){
    int sum =0;
    for(int i=1;i<=10;i++){
      sum=sum+i;
    }
    printf("\nthe sum is : %d\n",sum);
    return 0;
}