/*
 ============================================================================
 Name        : ex4.c
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
	int a,i,b ;
	printf("donner un nombre");
	scanf("%d",&i);
	for (i=1;i<1000;i++)
	{
		a=0;
		for(b=1;b<i;b++)
		{
			if(i%b ==0)
				a=a+b;
		}
		}
	if(a==i)
		printf("%d est parfait\n",i);
	return 0;
	}
