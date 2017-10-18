/*
 ============================================================================
 Name        : ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int l,h,i,j ;
	do
	{
		printf("entrer la longueur");
		scanf("%&",l);
		printf("entrer la largeur ");
		scanf("%d",&h);
	}while (l<0&&h<0);
	for (i=1;i<=h;i++)
	{
		printf("\n");
		for(j=1;j<=l;j++)
		{
			printf("*");
		}
	}
}
