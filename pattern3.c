#include <stdio.h>
#include <conio.h>

void main (){
	int i=5,j=1;
	for(i=5;i>=1;i--){
	for(j=5;j>=i;j--){
		printf("%d",j);
	}	
	printf("\n");
	}
}
