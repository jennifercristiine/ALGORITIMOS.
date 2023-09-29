/*Escreva um programa que calcule e mostre na tela uma tabela de valores de temperatura em Celsius e Farenheit. 
A faixa de temperaturas que deve ser mostrada é de 0 a 100 graus Celsius, em intervalos de 5 graus*/

#include <stdio.h>

int main (){
	
	int i;
	
	for(i = 0; i <= 100; i = i + 5){
 	printf("\n Celsius: %d, Farenheit: %.1f", i, i * 1.8 + 32);
}
	return 0;
}
