#include<stdio.h>
#include<math.h>
int main(){
    /*
    n is use for original number;
    count use for how many digit in a number 
    sum is use for store vlaue;
    */
    int n,count=0,sum=0,power;
    printf("enter number = ");
    scanf("%d",&n);

    //count loop;
    int copy1=n;
    while(copy1>0){
        copy1=copy1/10;
        count++;
    }

    //main logic loop;
    int copy2=n;
    while(copy2>0){
        int r=copy2%10;
        copy2=copy2/10;
        power = powf(r,count);
        sum+=power;
    }

    if(sum==n){
        goto armstrong;
    }else{
        goto not_armstrong;
    }

    armstrong:
    printf("%d is a armstrong number",sum);
    return 0;

    not_armstrong:
    printf("%d is not a armstrong number",sum);
    return 0;

}