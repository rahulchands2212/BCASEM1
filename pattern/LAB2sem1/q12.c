#include<stdio.h>
int main(){
    int number;
    printf("enter number = ");
    scanf("%d",&number);

    //condition then if statement then else statement;
    (number%2==0? printf("%d is a even number",number): printf("%d is a odd number",number));

    return 0;  
}