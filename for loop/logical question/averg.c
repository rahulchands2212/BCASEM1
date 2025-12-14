#include<stdio.h>
//sum and average of 10 number from keyboard;
int main(){
    int n,sum=0;
    printf("the index of 10 number is : \n");
    for(int i=1;i<=10;i++){
        printf("the number is %d : ",i);
        scanf("%d",&n);
        sum+=n; //sum=sum+n;

    }
    float aveg;
    aveg=sum/10.00;
    printf("the sum is %d\n",sum);
    printf("the aveg is %.2f\n",aveg);
    return 0;

}