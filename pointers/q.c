#include<stdio.h>
#include<stdlib.h>

int main(){
    int row = 3,column = 3;
    int **pr;
    pr = (int **)malloc(row*sizeof(*pr));

      if(pr==NULL){
        printf("memory not assign");
        return 0;
    }


    //column assign;
    for(int i=0;i<row;i++){
        pr[i] = (int *)malloc(column*sizeof(int));
    }

  
    printf("enter number ");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
        scanf("%d",&pr[i][j]);
        }
    }

    for(int i=0;i<row;i++){
        free(pr[i]);
    }
    
  free(pr);

    return 0;
}