/*Escreva um algoritmo que leia dois n�meros e efetue a adi��o dos mesmos. Caso o valor somado sejamenor que 20, 
este dever� ser apresentado somando-se a ele mais 8; caso o valor somado seja igualou maior que 20, este dever� ser apresentado subtraindo-se 5. */

#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num1,num2,soma, resultado;
	
	printf("Informe primeiro n�mero: ");
	scanf("%d", &num1);
	
	printf("Informe segundo n�mero: ");
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
