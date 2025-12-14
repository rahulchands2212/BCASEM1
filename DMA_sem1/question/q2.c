/* input size by malloc than realloc the size by m if m>n 
than input value else print */

#include<stdio.h>
#include<stdlib.h>

int main(){
    //input n;
    int n;
    printf("enter memory size n : ");
    scanf("%d",&n);

    //allocate memory by malloc;
    int *p;
    p = (int *)malloc(n*sizeof(int));

    //checking the memory is allocation
    if(p==NULL){
        printf("memory not allocated ");
        return 0;
    }

    //insert values;
    printf("enter %d interger :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }

    //input memory size for realloc;
    int m;
    printf("enter new memory size m : ");
    scanf("%d",&m);
    
    //reallocate the memory ;
   int *temp = realloc(p,m*sizeof(int));

   //checking reallocation;
   if(temp==NULL){
    printf("reallocation failed");
    free(p);
    return 0;
   }

   p = temp;


   
    //comparing;
    if(m>n){    //then add new integers on previous data;
        printf("enter %d integers :\n",m-n);
        for(int i=n;i<m;i++){
            scanf("%d",&p[i]);
        }
    }

    //print;
    printf("RESULT\n");
    for(int i=0;i<m;i++){
        printf("%d ",p[i]);
    }

    //free memory;
    free(p);

    return 0;

}