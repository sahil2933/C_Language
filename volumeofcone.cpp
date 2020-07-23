#include <stdio.h>
#include <conio.h>

int main (){
	float pie=3.14,r=0.0,h=0.0,answer=0.0;
	printf("enter a volume of radius : ");
	scanf("%f",&r);
	printf("enter a volume of height : ");
	scanf("%f",&h);
	answer=(pie*r*r*h)/3;
	printf("answer is %f : ",answer);
	return 0;
}
