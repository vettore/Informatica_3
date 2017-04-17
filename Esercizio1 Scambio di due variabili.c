#include <stdio.h>
main()
{
	int a; // variabile n1
	int b; // variabile n2
	int c; // variabile di lavoro
	printf("inserisco la variabile a ");
	scanf("%d",&a); //inserisco la prima variabile
	printf("inserisco la variabile b ");
	scanf("%d",&b); //inserisco  la seconda variabile
	c=a;
	a=b;
	b=c;
	printf("il secondo numero nella prima variabile e %d", a);
	printf("il primo numero nella seconda variabile e %d", b);
}
