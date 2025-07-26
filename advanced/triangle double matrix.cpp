#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,m;
	scanf("%d",&n );
		scanf("%d",&m );

	
	for(i=0;i<n;i++){
		for(j=0;j<m-i;j++){
			printf(" ");
		}
			for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
	for(j=0;j<i;j++){
			printf(" ");
		}
		for(j=0;j<m-i;j++){
			printf("*");
		}
		printf("\n");	
	}
	getch();
   return 0;
}
