/* programma che mi permette di trovare il max tra tre numeri*/
#include<stdio.h>
main()
{
	int n1; //variabile che contiene il primo numero
	int n2; //variabile che contiene il secondo numero
	int n3; //variabile che contiene il terzo numero
	int max; // variabile del valore massimo
	printf("inserire il primo numero"); //inserisco il valore di n1
	scanf("%d",& n1);
	printf("inserire il secondo numero"); //inserisco il valore di n2
	scanf("%d",& n2);
	printf("inserire il terzo numero"); //inserisco il valore di n3
	scanf("%d",& n3);
	if (n1>n2) { 
		max=n1; 
	}else{
	    max=n2;
	}
	if (n3>max) {
		max=n3;
	}
	printf("il numero maggiore e: %d", max);
}
