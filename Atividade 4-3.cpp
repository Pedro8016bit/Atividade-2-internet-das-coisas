#include <stdio.h>

int main() {
	
	int numero = 0;
	
	printf("escreva um numero");
	scanf("%i", &numero);
	if (numero % 2 == 0){
		printf("esse numero e par");
	}
	else{
		printf("esse numero e impar");
	}
	
}
