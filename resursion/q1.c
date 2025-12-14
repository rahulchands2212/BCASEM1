/*
print n number by  recursion 5 to 1;
*/

#include<stdio.h>

void printn(int n){
    if(n==0){
        return;
    }

    printf("%d\n",n);

    printn(n-1);    //recursion;
}


int main(){
    printn(5);
}