/* find average  of n  numbers 
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    //input memory by user;
    int n;
    printf("enter memory size : ");
    scanf("%d",&n);
    
    //allocate memory ;
    int *p;
    p = (int *)malloc(n*sizeof(int));

    //checking;
    if(p==NULL){
        printf("allocation fali");
        return 0;
    }

   //input number;
   printf("enter %d number : ",n);
   for(int i=0;i<n;i++){
    scanf("%d",&p[i]);
   }

   //logic apply by traverse;
   int sum=0;
   for(int i=0;i<n;i++){
    sum+=p[i];
   }

   //average print;
   printf("average : %.2f",(float)sum/n);
   
    free(p);

    return 0;
    
}