#include<stdio.h>
#include<conio.h>
int main()
{
	int array [100], i,n,position;
	
	printf("Enter the elemets of array\n");
	scanf("%d", & n);
	
	printf("Enter your elements\n");
	for(i=0; i<n; i++){
		scanf("%d", & array[i]);
	}
	
	printf("Enter the positoin you want to delet\n");
	scanf("%d", & position);
	
	if(position>n+1){
		printf("Your input is error\n");
	}
	else
	{
		for(i=position-1; i<n-1; i++)
		array[i]=array[i+1];
		
	printf("Your result is \n");
	for(i=0; i<n-1; i++)
		printf("%d\n",array[i]);
	}	
	
	
	getch();
	return 0;
}
