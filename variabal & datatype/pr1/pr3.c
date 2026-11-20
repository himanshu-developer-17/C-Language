#include<stdio.h>
#include<conio.h>

void main()
{
	int x = 10;
	int y = 20;
	int z = x;
	
	x = x*y;
	y = x/y;
	x = x/y;
	
	printf("%d",x);
	printf("\n%d",y);
	
}

