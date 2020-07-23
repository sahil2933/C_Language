#include <stdio.h>
#include <conio.h>

void main(){
	int maths, sci, english; //variable declaration
	int tmarks;
	printf("enter marks of maths");
	scanf("%d",&maths);
	printf("enter marks of sci");
	scanf("%d",&sci);
	printf("enter marks of english");
	scanf("%d",&english);
	tmarks = maths +sci+english;
	printf("total marks : %d",tmarks);
}
