/*Elabore um programa que leia dois valores inteiros distintos e apresente o resultado da diferen�ado maior valor pelo menor valor*/

#include <stdio.h>
#include<locale.h>

int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2;
	
	printf("Informe numero: ");
	scanf("%d", &num1);

	printf("Informe numero: ");
	scanf("%d", &num2);
	
	if (num1 > num2) {
		printf("Diferen�a %d", num1 - num2);
		}
	else {
		printf("Diferen�a de %d",  num2 - num1);
	}	
		
		
		
	return 0;
	
}
	
	
