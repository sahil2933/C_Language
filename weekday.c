#include <stdio.h>
#include <conio.h>

void main(){
int weekday = 0;
printf("enter day of the week : ");
scanf("%d",&weekday);
switch(weekday){
case 1:
printf("\nMonday");
break;
case 2:
printf("\nTuesday");
break;
case 3:
printf("\nwednesday");
break;
case 4:
printf("\nThursday");
break;
case 5:
printf("\nFriday");
break;
case 6:
printf("\nSaturday");
break;
case 7:
printf("\nSunday");
break;
default:
printf("\nWrong day selected");
break;
}
}
