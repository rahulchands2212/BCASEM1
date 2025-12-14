/* store data of student */

#include<stdio.h>
#include<wchar.h>

int main(){
    //FILE;
  

    //create a structure;
    struct record {
        char name[20];
        int rollno;
        float cgp;
    }s1;

      FILE *fptr;
    fptr = fopen("student_record.txt","w"); //open file

    if(fptr==NULL){
        printf("file not create");
    }
    //input name 
    printf("Name : ");
    fgets(s1.name,20,stdin);

    //input rollnumber;
    printf("Roll number : ");
    scanf("%d",&s1.rollno);

    //input cgp;
    printf("CGP : ");
    scanf("%f",&s1.cgp);

    //store all information in student_record.txt file;
   fprintf(fptr,"Name : %s",s1.name);
    fprintf(fptr,"Roll number : %d\n",s1.rollno);
    fprintf(fptr,"cgp : %.2f",s1.cgp);

fclose(fptr);   
 
}