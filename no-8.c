#include <stdio.h>
#include <conio.h>

void main(){
int a = 1,sum = 0;
do{
printf("\n%d",a);
sum += a;
a++;
}while(a <= 20);
printf("sum : %d",sum);
}
