#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("two numbers:");
	
	scanf("%d%d ,&a,&b");
	if(a>b){
		c=a;
	}
	else{
		c=b;
	}
	for(d=0;d<c;d++){
		if((d%a==0)&(d%b==0)){
			printf("\nGCD of two number is:%d",d);
			break;
		}
	}
	
}
