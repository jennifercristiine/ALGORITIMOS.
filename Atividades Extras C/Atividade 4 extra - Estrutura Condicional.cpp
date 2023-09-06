/* Escreva um programa que leia dois números inteiros distintos e verifique se o maior númerodigitado é divisível pelo menor. 
Se verdadeiro, apresente a mensagem "Estes números sãodivisíveis!", caso contrário, apresente a mensagem "Estes números não são divisíveis!"*/

#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2;
	
	printf("Informe um número: ");
	scanf("%d", &num1);
	
	printf("Informe um número: ");
	scanf("%d", &num2);
	
	if (num1 > num2) {
		if (num1 % num2 == 0){
			printf("Estes números são divisíveis!");
		}
		else{
			printf("Estes números não são divisíveis!");
		}
	}
	else{
		if (num2 % num1 == 0){
			printf("Estes números são divisíveis!");
		}
		else{
			printf("Estes números não são divisíveis!");
		}
	}


	return 0;
	
}
