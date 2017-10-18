/*
 ============================================================================
 Name        : ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,r,x;
	do
	{
		printf("donner a:");
		scanf("%d",&a);
		printf("donner b:");
		scanf("%d",&b);

	}while (a<b);
		r=a%b ;
	while(r!=0)
	{
		x=a;
		a=b;
		b=r ;
		r=a%b;
	}
	printf("le pgcd est %d",b);
	return 0;
}
