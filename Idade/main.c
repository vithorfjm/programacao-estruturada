/*
 - menor que 1 -> nao nasceu
 - 1 ate 15 -> nao vota
 - 16 ou 17 -> opcional
 - 18 ate 64 -> obrigatorio
 - 65 ou mais -> opcional
 - 41 -> ganha premio 1
 - 82 -> ganha premio 2 
*/

#include <stdio.h>

int main(){
	int idade = 0;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	if (idade < 1){
		printf("Nao nasceu");
	} else  {
		if (idade < 16){
			printf("Nao vota");
		} else {
			if (idade == 16){
				printf("Opcional");
			} else {
				if (idade == 17){
					printf("Opcional");
				} else {
					if (idade == 41){
						printf("Ganha premio 1 $$$");
					} else {
						if (idade < 65){
							printf("Obrigatorio");
						} else {
							if (idade == 82){
								printf("Ganha premio 2 $$$");
							} else {
								if (idade >= 65){
									printf("Opcional");
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

