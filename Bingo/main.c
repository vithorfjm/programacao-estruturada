#include <stdio.h>

int main(){
	int numero = 0;
	int incremento = 1;
	do {
		printf("Digite um numero de 1 a 500: ");
		scanf("%d", &numero);
	} while (numero < 1 || numero > 500);
	int decremento = numero;
	for(incremento; incremento<=numero; incremento++){
		if (incremento % 4 == 0 && incremento % 5 == 0){
			printf("BINGO\t");
			if (decremento % 4 == 0 && decremento % 5 == 0){
				printf("BINGO\n");
			} else if (decremento % 4 == 0 ){
				printf("M4\n");
			} else if (decremento % 5 == 0){
				printf("M5\n");
			} else {
				printf("%d\n", decremento);
			}
		} else if (incremento % 4 == 0){
			printf("M4\t");
			if (decremento % 4 == 0 && decremento % 5 == 0){
				printf("BINGO\n");
			} else if (decremento % 4 == 0 ){
				printf("M4\n");
			} else if (decremento % 5 == 0){
				printf("M5\n");
			} else {
				printf("%d\n", decremento);
			}
		} else if(incremento % 5 == 0){
			printf("M5\t");
			if (decremento % 4 == 0 && decremento % 5 == 0){
				printf("BINGO\n");
			} else if (decremento % 4 == 0 ){
				printf("M4\n");
			} else if (decremento % 5 == 0){
				printf("M5\n");
			} else {
				printf("%d\n", decremento);
			}
		} else {
			printf("%d\t", incremento);
			if (decremento % 4 == 0 && decremento % 5 == 0){
				printf("BINGO\n");
			} else if (decremento % 4 == 0 ){
				printf("M4\n");
			} else if (decremento % 5 == 0){
				printf("M5\n");
			} else {
				printf("%d\n", decremento);
			}
		}
		decremento--;
	}
}
