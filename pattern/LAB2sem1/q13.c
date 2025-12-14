#include<stdio.h>
int main(){
    int number,i;
    printf("enter number = ");
    scanf("%d",&number);

    //using return 0 for exit whole program after geting an answer;
    if(number>=1){
         if(number==2||number==3){      //when number==1 ,2 and 3 prime print;
            printf("%d is a prime number",number);
           
        }else if(number%2==0 || number==1){                  //when number is even and  1 print not prime;
            printf("%d is not a prime number ",number);
            
        }
        for(i=3;i<=number;i+=2){       //for checking perfect square root number;
            if(number%i==0){
                 printf("%d is not a prime number ",number);
                 
            }  
            }
        printf("%d is a prime number",number);  //when we dont get match then print number is prime;
        }

     else{
            printf("enter valid number");
        }
   
    return 0;

}