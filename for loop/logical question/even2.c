#include<stdio.h>
int main(){
    int n,even = 0,sum=0;
    float aveg;
    printf("enter number n :");
    scanf("%d",&n);
    printf("the first %d even number is : ",n);

    for(int i=0;i<n;i++){
        even = even+2;      // logic for even number;
        printf("%d  ",even);    // print even number ;
        sum =sum+even;      // sum of all even number ;
        aveg = sum/(float)n;    //logic for aveg;
    }
    printf("\n");       // next line after print the even number ;
    printf("the  sum of first %d even number is :  %d\n",n,sum);    // print sum of even number ;
    printf("the aveg of first %d even number is : %.2f",n,aveg);    //print the aveg of even number ;

    return 0;
}