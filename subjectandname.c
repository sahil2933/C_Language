#include <stdio.h>
#include <conio.h>

void main()
{
	enum students {sahil=0,sunny,rohan};
	enum subject {sci=0,maths=1,guj=2};
	enum subject s = 0;
	enum students stud = 0;
	if (stud == 0)
	printf("value of sahil");
	else if(stud == 1)
    printf("name is sunny");
    if(stud == 2)
    printf("name is rohan");
    
    if(s == 0)
    printf("\n you chose sci");
    if(s == 1)
    printf("\n you chose maths");
    if(s == 2)
    printf("\n you chose guj");
    getch();
}
