#include <stdio.h>
int main ()
{
    float d;  //disabile
    float ac; //accompagnatore
    float al; //altezza
    float s;  //supplemento
    float p;  //prezzo
    printf("il cliente e' un disabile? (1=si, 0=no) ");
    scanf("%f",&d);
    if (d==0){
    	printf("il cliente e' un accompagnatore? (1=si, 0=no");
    	scanf("%f",&ac);
    	if (ac==0){
    		printf("inserire l'altezza");
    		scanf("%f",&al);
    		if(al<=100){
    			p=0
    			printf("il cliente vuole un supplemento? (1=si, 0=no");
    			scanf("%f",&s);
    			if (s==1)
    			    p=p+7.50;
			}
			else{
				if(al<=140){
					p=28;
					printf("il cliente vuole un supplemento? (1=si, 0=no")
					if (s==1)
					    p=p+7.50;
				}
				else{
					p=34.90;
					printf("il cliente vuole un supplemento? (1=si, 0=no");
					scanf("%f",&s);
					if (s==1)
					    p=p+90.50;
					 
				}
				
			}
		}
		else{
			p=25.50
			printf("il cliente vuole un supplemento? (1=si, 0=no");
			scanf("%f",&s);
			if (s==1)
			    p=p+9.50;
		}
	}
	else{
		p=0;
		printf("il cliente vuole un supplemento? (1=si, 0=no");
		scanf("%f",&s);
		if (s==1)
		    p=p+7.50;
	}
	printf("il prezzo da pagare e' %f",p);
}
    	
             
