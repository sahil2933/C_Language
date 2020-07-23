#include <stdio.h>
#include <conio.h>

void main (){
	int perc=0;
	printf("enter your percentage : ");
	scanf("%d",&perc);
	if (perc>=80){
		printf("a grade");
	}
	else if (perc>=65){
		printf("b grade");
	}
	else if (perc>=50){
		printf("c grade");
	}
	else{
		printf("f grade");
	}
}
