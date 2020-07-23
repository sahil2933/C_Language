#include <stdio.h>
#include <conio.h>

void main (){
	float r=0.0;
	int p=0,n=0,i=0;
	printf("enter principal amount : ");
	scanf("%d",&p);
	printf("enter rate of interest : ");
	scanf("%f",&r);
	printf("enter of number of years : ");
	scanf("%d",&n);
	i=(int)(p*r*n)/100;
	printf("simple interest %d : ",i);
	getch();
}
