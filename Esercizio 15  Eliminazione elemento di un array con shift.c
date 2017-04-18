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
    int tot;
    cont=0;
    while(cont<=9){
          printf("\nInserisci numero:");
          scanf("%d",&v[cont]);
          cont++;
    }
    tot=10;
    printf("\nInserisci posizione dell'elemento da eliminare:");
    scanf("%d",&pos);
    for(cont=pos;cont<tot;cont++){
        v[cont]=v[cont+1];
    }
    tot--;
    for(cont=0;cont<tot;cont++){
        printf("\n\n%d",v[cont]);
    }
    system("PAUSE");
}
