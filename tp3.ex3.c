/*
 ============================================================================
 Name        : ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main() {
	int b,x,i;
	do
	{
		printf("donner un nombre :");
		scanf("%d",&b);
	}while (b<0);
	x=1;
	for (i=2;i<=b;i++);
	{
		if (b%i==0)
			x=x+1 ;
	}
	if(x==2)
		printf("%d est un nombre premier",b);
	else printf("%d est non pas un nombre premier",b);

	return 0;
}
