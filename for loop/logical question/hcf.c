#include<stdio.h>
int main(){
    int i,a,b,hcf=1,s;
    printf("enter number a and b = ");
    scanf("%d %d",&a,&b);
/*
we using condition because hcf is always less
 then and equal to the smaller number ;
*/
    if(a<b){
        s=a;
    }else{
        s=b;
    }

    for(i=2;i<=s;i++){
        if(a%i==0 && b%i==0){
            hcf = i;
        }
    }
    printf("the hcf of  %d and %d = %d",a,b,hcf);
    return 0;
}