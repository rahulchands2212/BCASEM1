#include<stdio.h>
int main(){
    int number,r,reverse=0,copy;
    printf("enter five digit number = ");
    scanf("%d",&number);
    copy = number;

    //reversing the numbers;
    r = copy%10;
    reverse = reverse*10+r;
    copy = copy/10;

     r = copy%10;
    reverse = reverse*10+r;
    copy = copy/10;

     r = copy%10;
    reverse = reverse*10+r;
    copy = copy/10;

     r = copy%10;
    reverse = reverse*10+r;
    copy = copy/10;

     r = copy%10;
    reverse = reverse*10+r;
     printf("the reverse number is = %d\n",reverse);
     
    if(number==reverse){
        printf("original number is equal to reverse number");
    }else{
        printf("original number is not equal to reverse");
    }

    return 0;
}