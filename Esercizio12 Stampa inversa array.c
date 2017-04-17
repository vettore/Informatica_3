/*Autore: Cristian Vitali
  Data:17/04/2017
  Versione:1.0
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int n[10];
    int cont;
    cont=0;
    while(cont<=9){
          printf("\nInserisci numero:");
          scanf("%d",&n[cont]);
          cont++;
    }
    while(cont>=0){
          if(n[cont]!=0){
               printf(" %d",n[cont]);
          }
          cont--;
    }
    system("PAUSE");
}
