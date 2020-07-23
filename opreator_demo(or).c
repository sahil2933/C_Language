#include <stdio.h>
#include <conio.h>

void main(){
	int x = 10, y = 5, z = 0;
	z = (x > y) || (x == 5);
	printf("\n result : %d",z);
	z = (x > y) || (y > 10 );
	printf("\n result : %d",z);
	z = (x < y) || (y < 3);
	printf("\n result : %d",z);
	x+=y;
	printf("\n x : %d",x);
}

