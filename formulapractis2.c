#include <stdio.h>
#include <conio.h>

void main (){
	float pie=3.14,r=0.0,answer=0.0;
	printf("enter a value of r : ");
	scanf("%f",&r);
	answer = (pie*r*r)/2;
	printf("answer is %.2f",answer);
}
