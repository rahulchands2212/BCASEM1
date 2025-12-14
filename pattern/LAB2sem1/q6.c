#include<stdio.h>
int main(){
    int ram,shyam,ajay;
    printf("enter age of (ram, shyam, ajay)  = ");
    scanf("%d %d %d",&ram,&shyam,&ajay);
    
    if(ram>shyam){
        if(shyam>ajay){
            printf("ajay is youngest age = %d",ajay);
        }else{
            printf("shyam is youngest age = %d",shyam);
        }

    }else{
        if(ram>ajay){
            printf("ajay is youngest age = %d",ajay);
        }else{
            printf("ram is youngest age = %d",ram);
        }
    }
    return 0;
}