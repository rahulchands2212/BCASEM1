#include<stdio.h>
// print even number ,sum and average with condition;

int main(){
    int n,sum=0;
    float aveg ;
    printf("enter number n : ");
    scanf("%d",&n);
    printf("the first %d even number is : ",n);

    for(int i=1;i<=n*2;i++){
        if(i%2==0){             // logic for even number ;
            printf("%d  ",i);   // print even number ;
            sum = sum+i;        // logic for sum;
            aveg = sum/(float)n; // logic for aveg of even number ;
        }
    }
    printf("\n");    // print next line after even number ;
    printf("the sum of first %d even number is : %d\n",n,sum); // print sum of even number ;
    printf("the average  of first %d even number is : %.2f ",n,aveg); // print aveg of even number ;

    return 0;
}
