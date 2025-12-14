#include<stdio.h>
int main(){
    int n1,n2,i,hcf;
    printf("enter number (1 and 2) = ");
    scanf("%d %d",&n1,&n2);
    // for lcm;
    i=1;
    while(i<=n1*n2){
        if(i%n1==0&&i%n2==0){
            printf("lcm is = %d\n",i);
            break;
        }
        i++;
    }
    // hcf; we also use this formula lcm*hcm = a*b;
    int s;
    if(n1<n2){
        s=n1;
    }else{
        s=n2;
    }
        i=1;
    while(i<=s){
        if(n1%i==0 && n2%i==0){
            hcf = i;
        }
        i++;
    }
    printf("hcf is = %d",hcf);
    return 0;
}