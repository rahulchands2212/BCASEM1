#include<stdio.h>

int main(){
    //define data type for array sixe;
    int s;
    printf("enter array size = ");
    scanf("%d",&s);

    //define array for input ;
    int arr[s];

    //statement ;
    printf("enter %d elements = ",s);

    //take input from user and store in arr[s];
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }

    int r=0;    //staring point of reverse array;
    int reverse[s]; //declared to store reverse value;
   for(int i=s-1;i>=0;i--){     // loop use for run arr[] from last index to 0;

        reverse[r] = arr[i];
        
    r++;        //increment by 1 in r;
   }

   //this loop is use to print reverse array;
   printf("reverse of array = ");
    for(int i=0;i<s;i++){
    printf("%d ",reverse[i]);
    }

    return 0;
}