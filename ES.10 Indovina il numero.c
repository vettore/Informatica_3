/*Titolo:Programma che indovina il numero
  Autore: Cristian Vitali
  Data:17/04/2017
  Versione:1.0
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n;
	int cont;
	int nc;
	int indovinato;
	
	nc=rand()%15;
	indovinato=0;
	cont=10;
	printf("il pc ha pensato un numero da 1 a 14");
	do{
		printf("\nIndovinalo con 10 tentativi:");
		scanf("%d",&n);
		if(n==nc) {
			indovinato=1;
		}
		cont--;
	}while(cont>0&&indovinato==0);
	if(indovinato==1) {
		printf("Hai vinto");
	}else{
		printf("Hai perso");
	}
}
