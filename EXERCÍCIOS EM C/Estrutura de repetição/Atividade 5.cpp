/*Escreva um programa que mostre todos os n�meros pares existentes entre 1 e um n�mero lido do
teclado, bem como a quantidade de n�meros apresentados*/

#include <stdio.h>
int main() {
 
 int num, i, quantidade;
 
 quantidade = 0;
 
 printf("Informe n�mero: ");
 scanf("%d", &num);
 
 for(i = 1; i <= num; i++){ 
 if(i % 2 == 0){
 printf("%d ", i);
 quantidade++;
 }
 }
 
 printf("Quantidade de nnmeros apresentados: %d", quantidade); /*nesse compilador DEVC++ N�O RODOU, NO PROGRAMIZ SIM*/
 
 return 0;
}

