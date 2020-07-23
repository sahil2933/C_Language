#include <stdio.h>
#include <conio.h>

void main (){// main function where the program execution starts
	int a = 0, b = 0;
	printf("enter a value : ");
    scanf("%d",&a);
    printf("enter a value : ");
    scanf("%d" , &b);
    printf("you entered : %d",a-b);
    getch();
}// end of main function
