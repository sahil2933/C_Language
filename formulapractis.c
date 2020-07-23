#include <stdio.h>
#include <conio.h>

void main (){
	int f=0,t=0,r=0,answer=0;
	printf("enter a value of f : ");
	scanf("%d",&f);
	printf("enter a value of t : ");
	scanf("%d",&t);
	printf("enter a value of r : ");
	scanf("%d",&r);
	answer = (f*t+r*t)*(f*t+r*t);
	printf("answer is, %d ",answer);
	}
