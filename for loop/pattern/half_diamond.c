#include<stdio.h>
int main(){

    //first half of diamond pattern;
    for(int i=1;i<=5;i++){
           if(i%2==0){
             for(int j=1;j<=i;j++){
                if(j%2==0){
                    printf("* ");
                }else{
                    printf(" ");
                }
            }
        }
        
        else{
             for(int j=1;j<=i;j++){
            if(j%2!=0){
                printf("* ");
            }else{
                printf(" ");
            }
        }
      
}
  printf("\n");

    }

    //second half of diamond pattern;
   for( int i=4;i>=1;i--){
    if(i%2==0){
        for(int j=1;j<=i;j++){
            if(j%2==0){
                printf("* ");
            }else{
                printf(" ");
            }
        }
    }else{
          for(int j=1;j<=i;j++){
        if(j%2!=0){
            printf("* ");
        }else{
            printf(" ");
        }
    }
   }

   printf("\n");
}
    return 0;
}