#include <stdio.h>

int main(){
	
	float nota1; 
	float nota2;
	float nota3;
	
	printf("escreva 3 numeros para a media: \n");
	scanf("%f", &nota1);
	scanf("%f", &nota2);
	scanf("%f", &nota3);
	
	float soma = nota1 + nota2 + nota3;
	float media = soma / 3;
	
	printf("a media e %f", media);
	
	
}
