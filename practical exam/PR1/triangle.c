#include <stdio.h>

void main()
{
	int first,second,third;
	
	printf("First angle : ") ;
	scanf("%d",&first);
	
	printf("Second angle : ") ;
	scanf("%d",&second);
	
	third = 180 - first - second;
	printf("Third angle : %d",third);
}	
