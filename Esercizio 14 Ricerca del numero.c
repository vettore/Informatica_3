/* Autore:Cristian Vitali
   Data:18/04/2017
   Versione:1.0
*/
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){
    int v[10];
    int cont;
    int pos;
    int trovato;
    int n;
    cont=0;
    while(cont<=9){
          printf("\nInserisci numero:");
          scanf("%d",&v[cont]);
          cont++;
    }
    cont=0;
    trovato=0;
    printf("\nInserisci numero da trovare:");
    scanf("%d",&n);
    while((cont<10)&&(trovato==0)){
          if(v[cont]==n){
             trovato=1;
             pos=cont;
          }
          cont++;
    }
    if(trovato==0){
       printf("\nIl numero non e' stato trovato\n\n");
    }else{
       printf("\nIl numero e' stato trovato alla posizione:%d\n\n",pos+1);
    }
    system("PAUSE");
}
