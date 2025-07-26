#include<stdio.h>
#include<conio.h>
int main()
{
	int array[100], n,i,m, position;
	
	printf("Element input");
	scanf("%d", & n);
	
	printf("Display element\n");
	
	for(i=0; i<n; i++){
		scanf("%d", & array[i]);
	}
	printf("Enter the position you wanna insert\n");
	scanf("%d", & position);
	
	printf("Enter the value you wanna insert\n");
	scanf("%d", & m);
	
	
	if(position>n+1){
		printf("error");
	}
	else{
		for(i=position-1; i<n-1; i++)
		{
		array[i+1]= array[i];	
		array[position-1]=m;
		}
	}
	printf("result\n");
	for(i=0; i<n; i++){
		printf("%d\n", array[i]);
	}
	getch();
	return 0;
}
