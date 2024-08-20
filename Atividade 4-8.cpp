#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int contador, negocio = 0;
	float num;
	
	printf("escreva um numero: \n");
	scanf("%f", &num);
	
	while (contador < 10){
		negocio = negocio + 1;
		float soma = num * negocio;
		printf("%f \n", soma);
		contador = contador + 1;
	}
	printf("essa e a tabuada do %f", num);
}
