#include<stdio.h>
int main(){
    int angle1,angle2,angle3;
    printf("enter angle1,angle2,angle3 = ");
    scanf("%d %d %d",&angle1,&angle2,&angle3);

    if(angle1+angle2+angle3==180){
        printf("this is vaild triangle");
    }else{
        printf("this is not a vaild triangle");
    }
    
    return 0;
}