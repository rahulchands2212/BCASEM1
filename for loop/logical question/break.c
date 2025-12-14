#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=5;i++){
        if(i==3){
            break;  //this break is use for stop at any which input by the user point ;
        }
        printf("%d\n",i);
        }

    
    return 0;
}

//break statement = if any condition true in first time then the break is to stop whole loop;