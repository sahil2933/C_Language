#include <stdio.h>
#include <conio.h>

void main (){
	int greater = 0,smaller = 0;
	int answer;
	printf("greater> : " );
	scanf("%d", &greater);
	printf(" smaller> : ");
	scanf("%d", &smaller);
	if(greater>smaller)
        printf("\n %d is greater",greater);
    else
        printf("\n %d is smaller",smaller);
}
