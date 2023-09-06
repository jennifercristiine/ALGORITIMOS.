/* Escreva um programa que leia dois n�meros inteiros distintos e verifique se o maior n�merodigitado � divis�vel pelo menor. 
Se verdadeiro, apresente a mensagem "Estes n�meros s�odivis�veis!", caso contr�rio, apresente a mensagem "Estes n�meros n�o s�o divis�veis!"*/

#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2;
	
	printf("Informe um n�mero: ");
	scanf("%d", &num1);
	
	printf("Informe um n�mero: ");
	scanf("%d", &num2);
	
	if (num1 > num2) {
		if (num1 % num2 == 0){
			printf("Estes n�meros s�o divis�veis!");
		}
		else{
			printf("Estes n�meros n�o s�o divis�veis!");
		}
	}
	else{
		if (num2 % num1 == 0){
			printf("Estes n�meros s�o divis�veis!");
		}
		else{
			printf("Estes n�meros n�o s�o divis�veis!");
		}
	}


	return 0;
	
}
