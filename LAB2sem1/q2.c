#include<stdio.h>
int main(){
    int basic_salary;
    float gross_salary;
    printf("enter basic salary = ");
    scanf("%d",&basic_salary);
if(basic_salary<1500){
    //convert HRA and DA percent into rs and add with basic salary ;
    gross_salary = (0.1*basic_salary) + (0.9*basic_salary)+basic_salary;
    printf("gross salary = %.2f",gross_salary);
}else{
    //convert DA percent into rs HRA also = 500 and add with basic salary ;
    gross_salary = 500 + basic_salary + (0.98*basic_salary);
      printf("gross salary = %.2f",gross_salary);
}
return 0;

}