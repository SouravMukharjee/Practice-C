#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	
	for(i=0;i<10;i++){
		for(j=0;j<10-i;j++){
			printf(" ");
		}
		for(j=0;j<2*i+1;j++){
			printf("*");	
		}
		for(j=0;j<20-2*i;j++){
			printf(" ");	
		}
		for(j=0;j<2*i+1;j++){
			printf("*");	
		}
		printf("\n");
}
for(i=0;i<25;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(j=0;j<40-2*i;j++){
			printf("*");	
		}
		printf("\n");
}
getch();
return 0;
}
