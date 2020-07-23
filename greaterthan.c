#include <stdio.h>
#include <conio.h>

void main (){
	int greater = 0;
	printf("\n enter a value : ");
	scanf("%d",&greater);
	
	if(greater >= 100)
	{
		printf("the number is grater than or equal to 100");
	}
	else
	{
		printf("the number is smaller than 100");
	}
    getch();
}
