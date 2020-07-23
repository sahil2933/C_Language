#include <stdio.h>
#include <conio.h>

void main(){
int i = 1,sum = 0;
do{
printf("\n%d",i);
sum += i;
i++;
}while(i <= 10);
printf("sum : %d",sum);
}
