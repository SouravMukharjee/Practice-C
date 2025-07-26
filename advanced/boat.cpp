#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
printf("\n\n\n\n");
	for(i=0;i<5;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(j=0;j<3;j++){
			printf("*");
	}
		for(j=0;j<5-i;j++){
			printf(" ");
		}
		for(j=0;j<28;j++){
			printf(" ");
}
	for(j=0;j<5-i;j++){
			printf(" ");
		}
		for(j=0;j<3;j++){
			printf("*");
	}
		printf("\n");
	}
	for(i=0;i<1;i++){
		for(j=0;j<5;j++){
			printf(" ");
	}
	for(j=0;j<34;j++){
			printf("*");
	}
	printf("\n");
}
	getch();
	return 0;
}
