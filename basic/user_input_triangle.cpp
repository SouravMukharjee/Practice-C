#include<stdio.h>
int main()
{
    int i,j,n,k;
 

    printf("\nEnter the no of lines to be printed: ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=0;i<n;i++)
    {
       for(j=0;j<n-i;j++)
       {
          printf("*");
       }
       for(k=0;k<(2*n-2*j);k++)
       {
           printf(" ");
       }
 for(j=0;j<n-i;j++)
       {
           printf("*");
       }
       printf("\n");
    }
    for(i=0;i<n;i++)
    {
       for(j=0;j<=i;j++)
       {
            printf("*");
       }
       for(k=2*n-2*j;k>0;k--)
       {
            printf(" ");
       }
 for(j=0;j<=i;j++)
       {
           printf("*");
       }
       printf("\n");
    }

} 


