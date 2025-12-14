#include<stdio.h>
int main(){
    int num,first;
    printf("enter number = ");
    scanf("%d",&num);
    int last = num%10;

   while(num>0){
     first=num%10;
    num=num/10;
   }
   printf("%d",first+last);
   return 0;
}