#include<stdio.h>
int main(){
    int a ,b,i,lcm;
    printf("enter number a ,b = ");
    scanf("%d %d",&a,&b);
        /*why we put i%a==0 and i%b==0 because when we put
         a%i==0 and b%i==0  then they will divide by 2 and 3 then 
         answer is alway show 2 and form */
         for(i=2;i<=a*b;i++){
        if(i%a==0 && i%b==0){       
            lcm=i;
            break;
        }
    }
      printf("the lcm of %d and %d is = %d",a,b,lcm);
    return 0;
    
}