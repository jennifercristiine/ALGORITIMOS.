/*O custo de um carro novo ao consumidor � a soma do custo de f�brica com a porcentagem do distribuidor e dos impostos aplicados ao custo de f�brica. 
Supondo que o percentual dodistribuidor seja de 28% e os impostos de 45%, escrever um programa para ler o custo de f�bricade um carro,
calcular e escrever o custo final ao consumido*/

#include <stdio.h>
#include<locale.h>

int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	float custo_fabricante, custo_final;
	
	printf("Informe o custo de fabrica: ");
	scanf("%f", &custo_fabricante);
	
	custo_final = custo_fabricante * 0.28 + custo_fabricante * 0.45;
	
	printf("O custo final ao consumidor �: %.2f", custo_final);
		
	return 0;

}
