#include <stdio.h>
#include <conio.h>

void main(){
	int a = 10, b = 5, c = 0;
	c = (a > b) || (a == 5);
	printf("\n result : %d",c);
	c = (a > b) || (b > 10 );
	printf("\n result : %d",c);
	c = (a < b) || (b < 3);
	printf("\n result : %d",c);
	a+=b;
	printf("\n a : %d",a);
}

