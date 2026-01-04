/* factorial number */

#include<stdio.h>

int main(){
    int number; //define variable.
    printf("enter number : ");
    scanf("%d",&number);    //take input by user.

    //logic
    int factorial = 1;  //store factorial ;
    for(int i=1;i<=number;i++){
        factorial *=i;
    }

    //print factorial;
    printf("factorial of %d : %d",number,factorial);

    return 0;
}