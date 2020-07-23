#include <stdio.h>
#include <conio.h>

void main (){
	int i=0,num=0,answer=1,j=1,final =0 ;
	printf("enter the number to which you want to add factorial value : ");
	scanf("%d",&num);
	for(j=1;j<=num;j++){
		
	   answer=1;
  	   for(i=1;i<=j;i++){
		answer=answer*i;
		
	    }
	    printf("\n%d %d",j,answer);
	   final = final+answer; 
	}
	printf("\nanswer is %d",final);
//	return 0;
}
