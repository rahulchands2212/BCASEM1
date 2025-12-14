#include<stdio.h>
int main(){
    int number1,number2;
    char operator;
    printf("enter number1 operator number2 = ");
    scanf("%d %c %d",&number1,&operator,&number2);

    switch(operator){
        case '+':
        printf("%d",number1+number2);
        break;

        case '-':
        printf("%d",number1-number2);
        break;

        case '*':
        printf("%d",number1*number2);
        break;

        case '/':
        if(number2==0){
            printf("not define");
        }else{
            printf("%d",number1/number2);
        }

    }
    return 0;
}