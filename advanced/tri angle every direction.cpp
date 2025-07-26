#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<10;i++){
	for(j=0;j<10-i;j++){
	printf("*"); /*1st angle*/
}
for(j=0;j<1;j++){
	printf(" ");
}
for(j=0;j<i;j++){
	printf("*");/*2nd angle*/
}
	printf("\n");
	}
	printf("\n\n");
	for(i=0;i<10;i++){
	for(j=0;j<i;j++){
	printf("*");/*3rd angle*/
}
	for(j=0;j<1;j++){
	printf(" ");
}
	for(j=0;j<10-i;j++){
	printf("*");/*4th  angle*/
}
	printf("\n");
	}

	return 0;
}
