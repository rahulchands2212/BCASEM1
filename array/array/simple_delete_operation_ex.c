#include<stdio.h>
int main(){
//pre define array;
int arr[4] = {1,2,3,4};

//print before delete element and statement before loop;
printf("before delete target element = ");
for(int i=0;i<4;i++){
    printf("%d ",arr[i]);
}
//change line ;
printf("\n");

//firstly we traverse array than add condition for target element;

for(int i=0;i<4-1;i++){
    if(i==2){
        arr[i] = arr[i+1];
    }
}

printf("after delete target element = ");
for(int i=0;i<4;i++){
   //print array after delete traget element;
    printf("%d ",arr[i]);
}

return 0;
}


