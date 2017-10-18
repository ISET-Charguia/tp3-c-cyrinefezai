#include <stdio.h>
#include <stdlib.h>
int main() {
int x,f,i ;
do
{
printf(" donner un entier positif");
scanf("%d",&x);
} while(x<0);
	f=1;
i=1;
for(i=1;i<=x;i++)
{
	f=f*i;
}
printf("la factoriel de %d est %d",x,f);
	return 0;
}
