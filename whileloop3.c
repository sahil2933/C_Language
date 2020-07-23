#include <stdio.h>
#include <conio.h>

void main (){
	int i=1,answer=0;
	while(i<=20){
		answer=answer+i;
		printf("\n%d",i);
		i+=2;
	}
	printf("\n answer : %d",answer);
	getch();
}
