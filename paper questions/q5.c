/*reverse a number */

#include<stdio.h>
int main(){
    int n;  //define variable;
    printf("enter number : ");
    scanf("%d",&n);     //take input by user;

    int reverse = 0;    //store reverse number;
    while(n>0){
        int r = n%10;
        reverse = reverse*10+r;
        n = n/10;   //update loop;
    }

    //print reverse;
    printf("reverse = %d",reverse);
    
    return 0;
}