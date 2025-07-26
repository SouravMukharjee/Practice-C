#include <stdio.h>
#include<conio.h>
int main()
{
    int i, j;
    for(i=0; i<6; i++) {
        for(j=0; j<6-i; j++) {
            printf(" ");
        }
        for(j=0; j<2*i+1; j++) {
            printf("*");
        }
        for(j=0; j<=6-i; j++) {
            printf(" ");
        }
        for(j=0; j<=40; j++) {
            printf(" ");
        }
        for(j=0; j<6-i; j++) {
            printf(" ");
        }
        for(j=0; j<2*i+1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(i=0; i<4; i++){
        for(j=0; j<3; j++) {
            printf(" ");
        }
        for(j=0; j<7; j++) {
            printf("*");
        }
        for(j=0; j<48; j++) {
            printf(" ");
        }
        for(j=0; j<7; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(i=0; i<3; i++) {
        for(j=0; j<14; j++) {
            printf("*");
        }
        for(j=0; j<41; j++) {
            printf(" ");
        }
        for(j=0; j<14; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(i=0; i<5; i++) {
        for(j=0; j<2; j++) {
            printf(" ");
        }
        for(j=0; j<10; j++) {
            printf("*");
        }
        for(j=0; j<5; j++) {
            printf(" ");
        }
        for(j=0; j<5; j++) {
            printf("*");
        }
        for(j=0; j<5; j++) {
            printf(" ");
        }
        for(j=0; j<5; j++) {
            printf("*");
        }
        for(j=0; j<5; j++) {
            printf(" ");
        }
        for(j=0; j<5; j++) {
            printf("*");
        }
        for(j=0; j<5; j++) {
            printf(" ");
        }
        for(j=0; j<5; j++) {
            printf("*");
        }
        for(j=0; j<5; j++) {
            printf(" ");
        }
        for(j=0; j<10; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(i=0; i<10; i++) {
        for(j=0; j<70; j++) {
            printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
}


