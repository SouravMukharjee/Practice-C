#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=0;i<10;i++){
		for(j=0;j<10-i;j++){
			printf("");
		}
			for(j=0;j<10-i;j++){
			printf("*");
			
		}
		printf("\n");
	}
	return 0;
}
