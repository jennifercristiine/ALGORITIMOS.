/*Escreva um programa que mostre a tabuada de um n�mero inteiro qualquer que ser� digitado pelousu�rio, 
mas a tabuada n�o deve necessariamente iniciar em 1 e terminar em 10, ou seja, o valorinicial e final devem ser informados tamb�m pelo usu�rio, 
conforme mostrado no exemplo a seguir */

#include <stdio.h>

int main (){
	

	int num, comecar, terminar, i;
	
	printf("Informe tabela de multiplica��o: ");
	scanf("%d", &num);
	
	printf("Come�ar por qual n�mero inteiro: ");
	scanf("%d", &comecar);
			
	printf("Terminar por qual n�mero inteiro: ");
	scanf("%d", &terminar);
		
	for(i = comecar ; i <= terminar; i++){
		printf("\n %d x %d = %d", num, i, num * i );
		
	}

return 0;
}
