#include <stdio.h>
#include <conio.h>

void main (){
	int lines = 1, star = 0;
	for(lines =1; lines <=5; lines++){//outer loop
	for(star = 1; star <= lines; star++){// inner loop -->until inner loop comepleters the execution
	printf("%d",star);
	}
	printf("\n");
	}
}
