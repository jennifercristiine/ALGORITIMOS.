/*Escreva um programa que apresente na tela a tabuada de um n�mero lido do teclado. Por exemplo,
considerando que o n�mero lido � 2, o formato da apresenta��o deve ser o seguinte:
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20
*/

#include <stdio.h>
#include <locale.h>
int main (){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num, i;
	
	printf("Informe qual n�mero deseja vizualizar a tabela de multiplica��o: ");
	scanf("%d", &num);
	
	for(i = 1; i <=10; i++){
		printf("\n %d x %d = %d", num, i, num * i );
		
	}
	
	
	

	
	
	return 0;
}
