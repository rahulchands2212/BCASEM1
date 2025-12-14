#include<stdio.h>
// odd number using without condition;
// print odd number ,sum  and average;

int main(){
    int n,sum = 0;
    float aveg;
    printf("enter number n : ");
    scanf("%d",&n);
    printf("the first %d odd number is :  ",n);

    for(int i=1;i<=n;i++){
        printf("%d ",2*i-1); // logic and print for  odd number ;
        sum =sum+2*i-1;     // logic for sum of odd number ;
         aveg = sum/(float)n;    // logic for aveg;
       }
        
       printf("\n");    // next line after printing odd number ;
       printf("the sum of first %d odd number is : %d\n",n,sum);
       printf("the aveg of first %d odd number : %.2f ",n,aveg);
    
       return 0;
}