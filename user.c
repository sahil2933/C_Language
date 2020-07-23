#include <stdio.h>
#include <conio.h>

void main (){
	int a=0,b=0,c=0,d=0,e=0;
	int avg = 0;
	int tuser;
	printf("user a : ");
	scanf("%d", &a);
	printf("user b : ");
	scanf("%d", &b);
	printf("user c : ");
	scanf("%d", &c);
	printf("user d : ");
	scanf("%d", &d);
	printf("user e : ");
	scanf("%d", &e);
	tuser = a+b+c+d+e;
	printf("total user : %d",tuser);
	avg = tuser/5;
	printf("\n avg : %d",avg);
}
