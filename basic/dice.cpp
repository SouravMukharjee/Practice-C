#include<stdio.h>
int main()
{
	int i,j;	
	for(i=0;i<5;i++){
		for(j=0;j<5-i;j++){
			printf(" ");
		}
	
	for(j=0;j<2*i+1;j++){
		printf("*");
	}
	printf("\n");  
}
for(i=0;i<=5;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
	
	for(j=0;j<11-2*i;j++){
		printf("*");
	}
	printf("\n");
}
return 0;
}
	
	
	
