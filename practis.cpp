#include <stdio.h>
#include <conio.h>

void main (){
	int x=0,y=0;
	printf("enter a value x : ");
	scanf("%d",&x);
	for(x=1;x<=50;x+=2){
		y=x+y;
	}
	printf("\n answer is %d",y);
	
}
