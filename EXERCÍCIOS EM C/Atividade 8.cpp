/*Escreva um algoritmo que leia um número inteiro e, caso este número seja positivo, apresente umamensagem indicando se ele é par ou ímpar. 
Caso o número seja negativo, apresente o seu valorabsoluto*/

#include <stdio.h>
#include<locale.h>

int main () {
	
	setlocale(LC_ALL,"Portuguese");

	int num;

	printf("Informe o Número: ");
	scanf("%d", &num);
	
	if(num >= 0  ){
		if (num %2 == 0){
			printf("Par");
		}
		else{
			printf("Impar");
		}
		
	}
	else{
		printf("%d", num * -1);
	}

	return 0 ;
}

