#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++){
		for(j=5-i;j>=1;j--){
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++){
			printf("*");
		}
		printf("\n");
	}
	
}
