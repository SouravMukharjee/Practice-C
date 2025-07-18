#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=0;i<10;i++){
		for(j=0;j<10-i;j++){
			printf(" ");
		}
			for(j=0;j<1;j++){
			printf("*");
	}
	for(j=0;j<i;j++){
			printf(" ");
	}
	for(j=0;j<1;j++){
			printf("*");
	}
	printf("\n");
}
for(i=0;i<11;i++){
	for(j=0;j<i;j++){
			printf(" ");
		}
		for(j=0;j<1;j++){
			printf("*");
		}
		for(j=0;j<10-i;j++){
			printf(" ");
	}
	for(j=0;j<1;j++){
			printf("*");
	}
		printf("\n");	
	}
   return 0;
}
