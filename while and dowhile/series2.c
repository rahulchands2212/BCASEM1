#include<stdio.h>
int main(){
    int i,first =1,second = 10;
    
        i=1;
    while(i<=20){
        if(i%2==0){
            printf("%d\t",second);
            second--;
        }else{
            printf("%d\t",first);
            first++;
        }
        i++;
    }
    return 0;
}