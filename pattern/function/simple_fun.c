#include<stdio.h>
//user define  function;
void name(int n){
for(int i=1;i<=n;i++){
    printf("-");
}
printf("\n");
}

int main(){     //pre define function;
    name(30);   //call user define function;
    printf("\tRAHUL CHAND\n");  //print statement ;
    name(30);   //call user define function;

    return 0;
}