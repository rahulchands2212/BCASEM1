#include<stdio.h>
#include<wchar.h>

int main(){
    FILE  *fptr;
    fptr = fopen("student_record.txt","r");
     char name[20];
        int rollno;
        float cgp;
    long long int mobile;


    fscanf(fptr,"Name : %[^\n]\n"
        "Roll number : %d\n"
        "cgp : %f\n"
        "Mobile number : %lld"
        ,name,&rollno,&cgp,&mobile);

    printf("Name : %s\n",name);
    printf("Roll number : %d\n",rollno);
    printf("cgp : %.2f\n",cgp);
    printf("Mobile number : %lld\n",mobile);
    fclose(fptr);
    return 0;
}