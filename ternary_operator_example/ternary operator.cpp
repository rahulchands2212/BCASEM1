#include<stdio.h>
int main(){
	int n;
	printf("enter number = ");
	scanf("%d",&n);
	//ternary operator;
	((n%2==0)?printf("%d is a  even number ",n):printf("%d is a odd number ",n));
	return 0;
}
