#include <stdio.h> 
#include <stdlib.h>

int main(){
	
	float raio;
	const float pi = 3.14;
	
	printf("escreva o valor do raio:");
	scanf("%f", &raio);
	
	float conta = raio * raio;
	float area = pi * conta;
	
	printf("a area e %f", area);
	
}
