/*
Write a C program to add two distances entered by user. Measurement of distance should be in inch and feet.(Note: 12 inches = 1 foot);
*/
#include<stdio.h>
int main()
{
	struct distance {
		int feet;
		float inch;

	} d,e,sum;
	
	printf("Enter distance 1 \n");
	printf("Enter feet\n");
	scanf("%d", & d.feet);
	
	printf("Enter inch\n");
	scanf("%d", & d.inch);
	
	//2nd distance
	printf("Enter distance 2 \n");
	printf("Enter feet\n");
	scanf("%d", & e.feet);
	
	printf("Enter inch\n");
	scanf("%d", & e.inch);
	
	//statement ;
	sum.feet=d.feet+e.feet;
	sum.inch=d.inch+e.inch;
	
	//statement 2
	if (sum.inch>12){  
        ++sum.feet;
        sum.inch=sum.inch-12;
    }
    printf("Sum of distances=%d\'-%.1f\"",sum.feet,sum.inch); 	
	
	return 0;
	
}
