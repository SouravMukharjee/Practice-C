#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char a [100], b[100];
	
	printf("Enter your string\n");
	gets(a);
	
	strcpy(b,a);
	strrev(b);
	
	if(strcmp(a,b)==0){
		printf("The value is plaindorme\n");
	}
	else{
		printf("The value is not plaindrome:Your code is error\n");
	}
	getch();
	return 0;
}
