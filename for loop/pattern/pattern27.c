#include<stdio.h>
int main(){
	
int n,j,i,k;
	printf("enter number n : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){		//for next line;
		for(k=i;k<n-1;k++){		// for space;
			printf("_");
		}for(j=i;j>=0;j--){		// for print descending odder in left side of zero;
			printf("%d",j);
			}	if(i>0){
				for(j=1;j<=i;j++){	// for print assinding odder in right side of zero;
					printf("%d",j);
				}
			}
				printf("\n");
			}
	return 0;
}
