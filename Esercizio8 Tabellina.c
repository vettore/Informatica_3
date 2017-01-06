#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;                       // variabile contenente n                    
    int I;                       // variabile contenente I
    int Tab;                     // variabile contenente Tab
    do{
    	printf("\n Inserire n");
    	scanf("%d",&n);
	}
	while((n<2)||(n>10));
	I=1;
	Tab=0;
	while(I<=0){
		Tab=n*I
		printf("\n %d",Tab);
		I++;
	}
	
}
