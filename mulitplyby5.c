#include <stdio.h>
#include <conio.h>

void main (){
	int i=1,answer=1,num=1;
	printf("enter a value of num :");
	scanf("%d",&num);
	for(i=1;i<=10;i++){
		answer=i*num;
		printf("\n %d * %d = %d ",num,i,answer);
	
}

}
