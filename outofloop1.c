#include <stdio.h>
#include <conio.h>

void main(){
	int i=0,sum=0;
	for(i=0; i <= 500; i+=5){
		sum=sum+i;
		printf("\n i = %d -> sum = %d",i,sum);
	}
	printf("\n%d",sum);
	printf("\nout of for loop");
}
