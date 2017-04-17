/*Autore: Cristian Vitali
  Data:17/04/2017
  Versione:1.0
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n;
	int cont;
	int i;
	do{
		printf("Inserisci lato tra 2 e 20:");
		scanf("%d",&n);
	}while(n<2 || n>20);
	cont=0;
	while(cont<n) {
		printf("*");
		i=0;
		while(i<(n-1)) {
			if((cont=0) || (cont=n-1)) {
				printf(" ");
			}else{
				printf("*");
			}
			i++;
		}
		printf("\n");
		cont++;
	}
}
