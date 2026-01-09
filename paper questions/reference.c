#include<stdio.h>
void call(int *p){
    *p = *p+1;
    printf("p = %d\n",*p);
}
int main(){
    int a=5;
    call(&a);
    printf("a = %d",a);
    return 0;
}