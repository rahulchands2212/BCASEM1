#include<stdio.h>
int main(){
    //take input for array size;
    int s;  //define data type of variable;
    printf("enter array size = ");
    scanf("%d",&s);

    //declared array with data type;
    int number[s];

    int element = 1;
    //take multiple input depend on array size;
    for(int i = 0;i<s;i++){
        printf("enter element %d = ",element);
        scanf("%d",&number[i]);
        element++;
    }
    //next line;
    printf("\n");


    //statement for even  output;
        printf("even number = ");
    //start loop for check even number;
    for(int i=0;i<s;i++){
        if(number[i]%2==0){
            printf("%d ",number[i]);
        }
    }
    //change line after print even number ;
    printf("\n");

    //statement for odd output;
    printf("odd number = ");
    //start loop for check odd number;
    for(int i=0;i<s;i++){
        if(number[i]%2!=0){
            printf("%d ",number[i]);
        }
    }

    return 0;
    
}