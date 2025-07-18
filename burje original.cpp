#include<stdio.h>
#include<conio.h>

int  main()
{
	int i,j,n;
	scanf("%d",&n);
	
	printf("\n");
	
	for(i=0;i<10;i++){
		for(j=0;j<n;j++){
			printf(" "); /*add a new gap*/
		}
		for(j=0;j<25;j++){
			printf("/"); 
		}
		for(j=0;j<2;j++){
			printf(" "); /*remove star */
		}
		for(j=0;j<25;j++){
			printf("/");
		}
		printf("\n"); /*complete 1st row */
	}
	for(i=0;i<10-2;i++){
		for(j=0;j<n;j++){
			printf(" "); /*add a new gap*/
		}
		for(j=0;j<22;j++){
			printf("/");
	}
     	for(j=0;j<3;j++){
             printf(" "); /*remove star */
	}
	for(j=0;j<2;j++){
			printf("_"); /*gap of row */
	}
	for(j=0;j<3;j++){
			printf(" "); /*remove satr */
	}
	for(j=0;j<22;j++){
			printf("/");
	}
			printf("\n"); /*complete 2nd row */

}
for(i=0;i<8;i++){
	for(j=0;j<n;j++){
			printf(" "); /*add a new gap*/
		}
		for(j=0;j<18;j++){
			printf("/");
		}
		for(j=0;j<4;j++){
			printf(" "); /*remove satr */
		}
		for(j=0;j<8;j++){
			printf("_"); /*gap of row */
		}
		for(j=0;j<4;j++){
			printf(" "); /*remove satr */
		}
		for(j=0;j<18;j++){
			printf("/");
		}
		printf("\n"); /*complete 3rd row */
	}
	for(i=0;i<8;i++){
		for(j=0;j<n;j++){
			printf(" "); /*add a new gap*/
		}
		for(j=0;j<14;j++){
			printf("/");
		}
		for(j=0;j<4+1;j++){
			printf(" "); /*remove satr */
		}
		for(j=0;j<12+3;j++){
			printf("_"); /*gap of row */
		}
		for(j=0;j<5;j++){
			printf(" "); /*remove satr */
		}
		for(j=0;j<13;j++){
			printf("/");
		}
		printf("\n"); /*complete 4th row */
	}
	
	for(i=0;i<8;i++){
		for(j=0;j<n;j++){
			printf(" "); /*add a new gap*/
		}
		for(j=0;j<8;j++){
			printf("/");
		}
		for(j=0;j<6;j++){
			printf(" "); /*remove satr */
		}
		for(j=0;j<25;j++){
			printf("_"); /*gap of row */
		}
		for(j=0;j<6;j++){
			printf(" "); /*remove satr */
		}
		for(j=0;j<7;j++){
			printf("/");
		}
		printf("\n"); /*complete 5th row */
	}
	for(i=0;i<9;i++){
		for(j=0;j<n;j++){
			printf(" "); /*add a new gap*/
		}
		
		for(j=0;j<52;j++){
			printf("_");
		}
				printf("\n"); 
}
	getch();
	return 0;
}
