#include<stdio.h>
#include<math.h>
int main(){
    int n,sum=0,i;
    printf("enter number n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      int pow = powf(i,i);
      sum=sum+pow;
    }
    printf("the sum = %d",sum);
    return 0;
}
