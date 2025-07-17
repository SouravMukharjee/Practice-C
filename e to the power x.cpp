#include<stdio.h>
#include<conio.h>
int f(int, int);
int f(int x, int n)
{
        if(n == 1)
        {
            return 1;
        }
        else
        {
            return (x/(n-1)) * f(x,n-2);
        }

}

int main()
{
    int x, n, r;
        printf("enter the value for x and value for nth element");
        scanf("%d%d", &x, &n);
        r = f(x,n);
        printf("%d", r);
        
        getch();
		return 0;
}
