#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;                       // variabile contenente n
    int Nmin;                    // variabile contenente Nmin
    int I;                       // variabile contenente I
    int Num;                     // variabile contenente Num
    printf("\n Inserire n");   
    scanf("%d",&n);
	printf("\n Inserire Nmin");   
    scanf("%d",&Min);                           
    I=1;                        
    while(I<n)
         {
         	
            printf("\n Inserire Num");   
            scanf("%d",&Num);
			if(Num<Nmin){
				Nmin=Num;
			}
			
			I=I+1;       
            }
    printf("\n %d",Nmin); 
}
