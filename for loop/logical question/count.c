#include<stdio.h>
int main(){
	int n,count=0;
	printf("enter number : ");
	scanf("%d",&n);
	printf("\nthe first %d odd number is : ",n);
	int i;
	for(i=1;i<=n;i++){
		if(i%2!=0){
			printf("%d ",i);
			count ++;
		}
			
	}
	printf("\nthe total odd number is : %d",count);
	return 0;
}
