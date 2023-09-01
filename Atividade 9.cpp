/*Escreva um algoritmo que, dada a idade de uma pessoa,
 determine sua classificação como menor deidade (menos de 18 anos), maior de idade ou terceira idade (idade igual ou superior a 65 anos).*/
 
 #include <stdio.h>
#include<locale.h>

int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
		
	printf("Informe a idade: ");
	scanf("%d", &idade);
	

	if( idade > 0 && idade <= 18 ){
		printf("Menor de idade %d", idade);
	}
	
	else if (idade >= 18 && idade <= 65 ){
		printf("Maior de idade %d", idade);
	}
	
	else {
		printf("Terceira idade");
	}
	
	

	return 0;
}
	

