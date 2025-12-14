#include<stdio.h>
int main(){
    //define variable for array size and take input of array size.
    int s;
    printf("enter array size = ");
    scanf("%d",&s);

    //define array and take input;
    int arr[s];
    printf("enter %d positive element = ",s);
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }

    int count=0;    //use for how many time condition true;
    //traverse the array;
   for(int i=0;i<s;i++){
    int j=i;
    if(arr[j]==2){
        count++;        //use for how many element delete;
        while(j<s-1){
            arr[j] = arr[j+1];
            arr[j+1] = 0;       //use for when last index have 2 ,stop to run loop infinity 
            j++;
        }
        i--;    //using i-- because index is jump when 2 is continous;
    }
   }

//print array after delete 2;
printf("array after remove to = ");
for(int i=0;i<s-count;i++){     //s-count remove element how many time 2 present;
        printf("%d ",arr[i]);
}
    return 0;
}