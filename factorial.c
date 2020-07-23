#include <stdio.h>
#include <conio.h>

void main (){
	int i = 0, fact = 1, n = 0;
	printf("enter number to get factorial value : ");
	scanf("%d",&n);
	for(i=1; i <= n; i++){
		fact = fact *i;
		printf("\n i=%d -> fact = %d",i,fact);
	}
	printf("\n factorial value : %d",fact);
	//printf("\ not of for loop ");
}
