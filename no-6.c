#include <stdio.h>
#include <conio.h>

void main (){
	int a=0,num=0,answer=1,b=1,final =0 ;
	printf("enter the number to which you want to add factorial value : ");
	scanf("%d",&num);
	for(b=1;b=num;b++){
		
	   answer=1;
  	   for(a=1;a<=b;a++){
		answer=answer*a;
		
	    }
	    printf("\n%d %d",b,answer);
	   final = final+answer; 
	}
	printf("\nanswer is %d",final);
//	return 0;
}
