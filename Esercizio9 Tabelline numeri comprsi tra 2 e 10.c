#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;                       // variabile contenente n                    
    int I;                       // variabile contenente I
    int Tab;                     // variabile contenente Tab
    n=2;
    while(n<=10){
    	I=1;
    	Tab=0;
    	while(I<=10){
    		Tab=n*I;
    		printf("\n %d", Tab);
    		I=I+1
		}
	printf("\n");
	n=n+1;	
	}
}
