/*Escreva um programa que mostre na tela uma contagem regressiva de 10 até 0 para o lançamento de
um foguete. Após o término da contagem regressiva, deve ser apresentada a palavra "Fogo!".*/

#include <stdio.h>
#include <windows.h> /*Biblioteca para usar o comando sleep*/
int main () {
	
	int i;
	
	for(i = 10; i>=0; i--){ /*inicialização; condição; incremento*/
	printf("%d\n", i); /*Escrevendo os números em linhas quebradas*/
	Sleep(1000); /*Comando para executar o programa dentro de X segundos*/
}

	printf("Fogo!");
	return 0;
	
}
