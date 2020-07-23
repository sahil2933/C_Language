#include <stdio.h>
#include <conio.h>

void main (){
	int i=0,num=0,answer=0;
	printf("enter a number ;");
	scanf("%d",&num);
	for(i=1;i<=10;i++){
		answer=num*i;
		printf("\n %d * %d = %d",num,i,answer);
	}
}
