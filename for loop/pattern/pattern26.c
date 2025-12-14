#include<stdio.h>
int main(){
    char i,k,j,l,m;
    for(i='E';i>='A';i--){
        for(k=i;k>'A';k--){
            printf("_");
        }for(j='E';j>=i;j--){
            printf("%c",j);     
        }
        printf("\n");   //the i,k,j loop is using for pattern output;
    }
    for(l='A';l<='Z';l++){
        printf("%c\t",l);     // this loop is using for print captial ABCD;
    }
    printf("\n[\\]^_");       // this instruction is print the character with is ask in question;
    for(m='a';m<='z';m++){
        printf("%c\t",m);     // this looop is use for print small abcd;
    }
    return 0;
}