/* Atividade 1- Faça um programa que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idadedessa pessoa expressa em dias. 
Considerar ano com 365 dias e mês com 30 dias*/

#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int  anos, meses, dias, total_dias;
	
	printf("Informe quantos anos você tem: ");
	scanf("%d", &anos);
	
	printf("Informe quantos meses você tem:  ");
	scanf("%d", &meses);
	
	printf("Informe quantos dias você tem:  ");
	scanf("%d", &dias);
	
	total_dias = anos * 365 + meses * 30 + dias;
	
	printf("Sua idade em dias é: %d ", total_dias);
		
	return 0;
}






