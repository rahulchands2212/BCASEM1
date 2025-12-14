#include<stdio.h>
// odd natural number and there sum and aveg (with condition);

int main(){
    int n,sum =0;
    float aveg;
    printf("enter number n : ");
    scanf("%d",&n);
    printf("the odd number is :");

    for(int i=1;i<=n*2;i++){    // for check first odd natural number ;
        if(i%2!=0){             //logic for odd number ;
            printf("%d ",i);    //print the odd number ;
           sum =sum+i;           // add odd number in sum;
           aveg = sum/(float)n;        // logic for aveg;
        }    
    }
    printf("\n");       // for next line after printing odd number and loop complete ;
    printf("the sum is  :%d\n",sum);  // for print the sum of odd number ;
     printf("the aveg is : %.2f",aveg);      // print aveg;
    
    return 0;
}