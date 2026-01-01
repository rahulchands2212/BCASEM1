#include<stdio.h>
#include<string.h>

int main(){
    char string[20];
    printf("enter name : ");
    fgets(string,20,stdin);

    string[strcspn(string,"\n")] = '\0';
    printf("before reverse : %s\n",string);
    strrev(string);
    
    printf("after reverse : %s",string);
    return 0;
}