
#include <stdio.h>
#include <conio.h>

void main (){
	int x=0,y=0,z=0;
	printf("enter a value of x : ");
	scanf("%d",&x);
	printf("enter a value of y : ");
	scanf("%d",&y);
	printf("enter a value of z : ");
	scanf("%d",&z);
	if(x>y)
	{
		if (x>z)
		{
			printf("x is greater : ");
		}
		else
		{
			printf("z is greater : ");
		}
	}
	else
	{
		if(y>z)
		{
			printf("y is greater : ");
		}
		else
		{
			printf("z is greater : ");
		}
	}
	getch();
}
