#include <stdio.h>
#include <conio.h>

void main () {
	int a = 0,b = 0;
	int c = 0;
	printf("enter a value : ");
	scanf("%d", &a);
	printf("enter a value : ");
	scanf("%d", &b);
	c=a*b;
	printf("you enter : %d",c);
	getch();
}
