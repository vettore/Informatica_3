#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;                      // variabile contenente n
    int Fat;                    // variabile contenente Fat
    int I;                      // variabile contenente I
    printf("\n Inserire n ");   
    scanf("%d",&n);             
    Fat=1;                    
    I=0;                        
    while(I<n)
         {
            Fat=Fat *(n-I);
            I=I+1; 
            }
    Media=Somma/n;
    printf("\n %d", Fat); //stampo il fattoriale
}
