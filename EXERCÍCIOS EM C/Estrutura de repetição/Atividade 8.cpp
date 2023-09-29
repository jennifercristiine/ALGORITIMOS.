/*Escreva um programa que mostre a tabuada de um número inteiro qualquer que será digitado pelousuário, 
mas a tabuada não deve necessariamente iniciar em 1 e terminar em 10, ou seja, o valorinicial e final devem ser informados também pelo usuário, 
conforme mostrado no exemplo a seguir */

#include <stdio.h>

int main (){
	

	int num, comecar, terminar, i;
	
	printf("Informe tabela de multiplicação: ");
	scanf("%d", &num);
	
	printf("Começar por qual número inteiro: ");
	scanf("%d", &comecar);
			
	printf("Terminar por qual número inteiro: ");
	scanf("%d", &terminar);
		
	for(i = comecar ; i <= terminar; i++){
		printf("\n %d x %d = %d", num, i, num * i );
		
	}

return 0;
}
