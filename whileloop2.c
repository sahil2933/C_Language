#include <stdio.h>
#include <conio.h>

void main (){
	int i=5,fact=1;
	while(i>=1){
		fact=fact*i;
		printf("\n %d %d",i,fact);
		i--;
	}
	printf("fact is %d ",fact);
	getch();
}
