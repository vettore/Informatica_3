#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;                      // variabile contenente n
    int Somma;                  // variabile contenente somma
    int I;                      // variabile contenente I
    int Num;                    // variabile contenente Num
    int Media;                  // variabile contenente Media
    printf("\n Inserire n ");   
    scanf("%d",&n);             
    Somma=0;                    
    I=0;                        
    while(I<n)
         {
              printf("\n Inserire Num "); 
              scanf("%d",&Num); 
              Somma=Somma+Num;
              I=I+1; 
              }
    Media=Somma/n;
    printf("\n %d", Media); 
}
