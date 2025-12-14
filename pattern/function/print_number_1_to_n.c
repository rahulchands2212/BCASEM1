#include<stdio.h>

/*we can do this without using static variable by declared in global*/

void num(int n){
    static int start = 1;   //static store privous value;
    if(n>=1){
    printf("%d\t",start);
    start++;    //increment in by 1 start point;
    num(n-1);   // recursion ;
    }
    
}

int main(){
    //define data type;
    int x;
    //take input 
printf("enter number = ");
scanf("%d",&x);

//call function with the help of call by value;
num(x);
return 0;
}