#include<stdio.h>
  int sum = 0; //global variable;
   
int sum_n(int n,int start){
 
    if(n>=start){
        sum=sum+start;  //storing value of start;
        sum_n(n,start+1); //recursion call;
    }
    return sum; //return value on argument ;
}

int main(){
  //define data type;
  int x;

  //take in input
   printf("enter number = ");
   scanf("%d",&x);

   //call function ; pass by value;
   printf("sum = %d",sum_n(x,1));

    return 0;
}