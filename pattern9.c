#include <stdio.h>
#include <conio.h>

void main (){
	int n=0,sum=0,i=0;
	printf("enter a value : ");
	scanf("%d",&n);
	for(i=1;i<= n;i++){
		sum=sum+(i*i);
	}
	printf("sum is %d",sum);

}
