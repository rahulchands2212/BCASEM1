#include<stdio.h>
#include<math.h>
int main(){
    float x,n,sum=0;
    float div,pow;
    printf("enter number x ");
    scanf("%f",&x);
    printf("enter number n ");
    scanf("%f",&n);

    for(int i=2;i<=n;i++){
     pow =  powf(x,i);  // for numinotor;
      float res =1;
    for(int j=i;j>=1;j--){
        res=res*j;
        if(j==1){
         div = pow/res;// numino divide by deno factorial;
         sum=sum+div;
        }
    }
    }
     printf("%.2f",sum+x+1);
    return 0;
}