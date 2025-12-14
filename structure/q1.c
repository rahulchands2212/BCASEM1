/*
how structure is define with simple program;
*/

#include<stdio.h>

//declared structure with(struct) keyword ;
struct record{
    char name[50];  //member of structure
    long long int phone_number;   //member of structure

};

int main(){
struct record key;

printf("enter name = ");
gets(key.name);

printf("enter number = ");
scanf("%lld",&key.phone_number);

printf("name = %s\n",key.name);
printf("phone number = %lld",key.phone_number);

return 0;

}