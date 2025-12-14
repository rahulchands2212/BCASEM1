#include<stdio.h>
int main(){
    int i,first=1,last=10;
    i=1;
    while(i<=10){
        if(i%2!=0){
            printf("%d\t",first);
            first++;
        }else{
            printf("%d\t",last);
            last--;
        }
        i++;
    }
    return 0;
}