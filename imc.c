#include <stdio.h>
#include <stdlib.h>

int main(){
	float peso;
	float altura;
	float IMC;
	
	printf("Insira a sua altura: \n");
	scanf("%f", &altura);
	fflush(stdin);
	
	printf("Insira o seu peso: \n");
	scanf("%f", &peso);
	
	IMC= peso / (altura*altura);
	
	printf("Seu IMC e: %.2f.\n", IMC);
	
	if (IMC <21.0){
		printf("abaixo do peso./n");
	}
		else{
		if	(IMC > 30.0){
				printf("Obeso. /n");		
			}
			else{
				printf("peso padrao. /n");
				
			}
		}
	}
	
