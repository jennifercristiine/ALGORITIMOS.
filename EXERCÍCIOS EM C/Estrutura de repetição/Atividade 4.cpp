/*Escreva um programa que mostre na tela a soma obtida dos 100 primeiros n�meros inteiros (1 + 2 + 3
+ 4 + 5 + ... + 100). Resultado: 5050.*/
#include <stdio.h>

int main () {
		
		int i, soma; /*Variaveis*/
		
		soma = 0;
		
		for(i =1; i <=100; i++ ) { /*inicializa��o; condi��o; incremento*/
			soma = soma + i;
		}
	
	printf("Resultado �: %d ", soma);
	
	return 0;
}
