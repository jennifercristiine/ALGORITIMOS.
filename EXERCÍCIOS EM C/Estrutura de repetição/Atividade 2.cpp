/*Escreva um programa que mostre na tela uma contagem regressiva de 10 at� 0 para o lan�amento de
um foguete. Ap�s o t�rmino da contagem regressiva, deve ser apresentada a palavra "Fogo!".*/

#include <stdio.h>
#include <windows.h> /*Biblioteca para usar o comando sleep*/
int main () {
	
	int i;
	
	for(i = 10; i>=0; i--){ /*inicializa��o; condi��o; incremento*/
	printf("%d\n", i); /*Escrevendo os n�meros em linhas quebradas*/
	Sleep(1000); /*Comando para executar o programa dentro de X segundos*/
}

	printf("Fogo!");
	return 0;
	
}
