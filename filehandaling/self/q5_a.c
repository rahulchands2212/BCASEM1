#include<stdio.h>
#include<wchar.h>

int main(){
    FILE *fptr;
    fptr = fopen("student_record.txt","a");     //open file in apperance;

    long long int mobile;
    printf("Mobile number : ");
    scanf("%lld",&mobile);

    fprintf(fptr,"\nMobile number : %lld",mobile);

    fclose(fptr);

    return 0;

}