#include<stdio.h>
#include<conio.h>
int main()
{
	int m,x,y,i;
	
	printf("enter two number :");
	scanf("%d %d",&x,&y);
	
	if(x>y){
		m=x;
	}
	else{
		m=y;
	}
	
	for(i=m;i>0;i--){
		if(x%i==0 && y%i==0){
	printf("\n the number is %d",i);
		break;
	}
}
	getch();
	return 0;
}
