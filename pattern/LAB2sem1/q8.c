#include<stdio.h>
int main(){
    int subject1,subject2,subject3,subject4,subject5;
    printf("enter marks of subject1 = ");
    scanf("%d",&subject1);
   
     printf("enter marks of subject2 = ");
    scanf("%d",&subject2);
   
     printf("enter marks of subject3 = ");
    scanf("%d",&subject3);
   
     printf("enter marks of subject4 = ");
    scanf("%d",&subject4);
   
     printf("enter marks of subject5 = ");
    scanf("%d",&subject5);

    float per = (float)((subject1+subject2+subject3+subject4+subject5)*100)/500;
    printf("percantage = %.2f%%\n",per);

    if(per>=60){
        printf("first division");
    }else if (per>=50 && per<60){
        printf("second division");
    }else if(per>=40 && per<50){
        printf("third division");
    }else{
        printf("fail");
    }

    return 0;
}
