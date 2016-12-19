//Scrivere un programma che dato un numero n controlli se n ha un numero m amico.
#include <stdio.h>
#include <math.h>
/*Autore: Cristian Vitali Classe:3°A
  Data:19/12/2016  versione:1.0*/
int main() {
	int n;       // variabile che mi indica il numero n
	int m;       // variabile che mi indica il numero m
	int div;     // variale che mi indica i divisori
	int somma;   // variabile che mi indica la somma
	printf("inserisci il numero");
	scanf("%d",& n);
	div=1;
	somma=0;
	while(div<=n/2) {
		if((n%div)==0) {
			somma=somma+div;
		}
		div=div+1;
	}
	m=somma;
	div=1;
	while(div<m/2) {
		div=div+1;
		if((m%div)==0) {
			
		}
	}
	if(somma=n){
		printf("i numeri amici sono: %d %d",n,m);
	}else {
	    printf("i numeri non sono amici");
	}
}
