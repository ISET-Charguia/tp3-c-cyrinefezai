/*
 ============================================================================
 Name        : ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,r,x,i,s;
	char c;
	do
	{
		printf("donner un entier positif ");
	    scanf("%d",&a);
	}while(a<0);
	i=1 ;
	s=0 ;
	do
	{
		r=a%2 ;
		x=r*i ;
		s=s*x ;
		i=i*10;
		a=a/2;
	} while (i=0);
	printf("%d",s);
	return 0;
}
