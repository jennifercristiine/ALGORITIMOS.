/*Escreva um algoritmo que leia um n�mero inteiro e, caso este n�mero seja positivo, apresente umamensagem indicando se ele � par ou �mpar. 
Caso o n�mero seja negativo, apresente o seu valorabsoluto*/

#include <stdio.h>
#include<locale.h>

int main () {
	
	setlocale(LC_ALL,"Portuguese");

	int num;

	printf("Informe o N�mero: ");
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

