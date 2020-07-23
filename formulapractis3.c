#include <stdio.h>
#include <conio.h>

void main (){
	float pie=3.14,radius=0.0,height=0.0,answer=0.0;
	printf("enter radius of a cylinder : ");
	scanf("%f",&radius);
	printf("enter height of a cylinder : ");
	scanf("%f",&height);
	answer = (pie*radius*radius*height);
	printf("answer is %f : ",answer);
}
