#include <stdio.h>
#include <conio.h>

void main (){
	int j=1,answer=1,num=1;
	printf("enter a value of num :");
	scanf("%d",&num);
	for(j=1;j<=10;j++){
		answer=j*num;
		printf("\n %d * %d = %d ",num,j,answer);
	
}

}
