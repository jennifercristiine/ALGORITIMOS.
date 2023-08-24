/*Escreva um algoritmo que leia dois números e efetue a adição dos mesmos. Caso o valor somado sejamenor que 20, 
este deverá ser apresentado somando-se a ele mais 8; caso o valor somado seja igualou maior que 20, este deverá ser apresentado subtraindo-se 5. */

#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num1,num2,soma, resultado;
	
	printf("Informe primeiro número: ");
	scanf("%d", &num1);
	
	printf("Informe segundo número: ");
	scanf("%d", &num2);
	
	soma = num1 + num2; 
	
	if(soma < 20){
		resultado = soma + 8;
	}	
	
	else {
		resultado = soma - 5;
		
	}
		printf("Resultado: %d", resultado);
	
	return 0;
}
