/* Titolo: Nome polindromo
   Autore: Cristian Vitali
   Data:18/04/2017
   Versione:1.0
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

   
int main(){
	
    int cont; 
    int i; 
    char parola[100]; 
    int palindromo;
    int medio; 
      printf("\n Inserire un nome ");
      scanf("%s",parola);
      cont=0;
      while(parola[100]!='\0'){
      cont++;
    }
    i=0;
    palindromo=1;
    medio=cont/2;
    while(i<medio && palindromo==1){
       if(parola[100]!=parola[i])
       {
           palindromo=0;
       }
       cont--;
       i++;
    }
    if(palindromo==1){
      printf("\n Il nome è palindromo ");
    }
    else{
      printf("\n Il nome non è palindromo ");
    }
}
