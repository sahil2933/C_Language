#include <stdio.h>
#include <conio.h>

void main (){
	int perc=0;
	printf("enter your percentage : ");
	scanf("%d",&perc);
	if (perc>60){
		printf("a grade");
	}
	else if (perc>60){
		printf("b grade");
	}
	else if (perc>50){
		printf("c grade");
	}
	else{
		printf("f grade");
	}
}
